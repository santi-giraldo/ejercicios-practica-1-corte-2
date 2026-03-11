#include <iostream>
#include <cmath> // Para la función pow()

using namespace std;

// Función para determinar si un número es un número de Armstrong
bool isArmstrong(int number) {
    if (number < 0) return false; // Los números negativos no son de Armstrong
    
    int originalNumber = number;
    int sum = 0;
    int numDigits = 0;
    
    // 1. Contar cuántos dígitos tiene el número
    int temp = number;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }
    
    // Si el número era 0, tiene 1 dígito
    if (number == 0) numDigits = 1;

    // 2. Extraer cada dígito, elevarlo a 'numDigits' y sumarlo
    temp = number;
    while (temp > 0) {
        int digit = temp % 10;           // Obtener el último dígito
        sum += pow(digit, numDigits);    // Elevar a la potencia y sumar
        temp /= 10;                      // Eliminar el último dígito
    }
    
    // 3. Verificar si la suma es igual al número original
    return sum == originalNumber;
}

int main() {
    // Casos de prueba basados en tu imagen
    int testCases[] = {9, 10, 153, 154};
    
    cout << "--- Verificador de Numeros de Armstrong ---" << endl;
    
    for (int num : testCases) {
        if (isArmstrong(num)) {
            cout << num << " es un numero de Armstrong." << endl;
        } else {
            cout << num << " NO es un numero de Armstrong." << endl;
        }
    }

    return 0;
}
