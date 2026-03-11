#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

// Función para calcular la Distancia de Hamming entre dos cadenas de ADN
int computeHammingDistance(const string& strand1, const string& strand2) {
    // 1. Validar que las longitudes sean iguales
    if (strand1.length() != strand2.length()) {
        throw invalid_argument("Las secuencias de ADN deben tener la misma longitud.");
    }

    int distance = 0;

    // 2. Iterar sobre los caracteres y contar las diferencias
    for (size_t i = 0; i < strand1.length(); ++i) {
        if (strand1[i] != strand2[i]) {
            distance++;
        }
    }

    // 3. Retornar la distancia total
    return distance;
}

int main() {
    // Caso de prueba basado en la imagen
    string dna1 = "GAGCCTACTAACGGGAT";
    string dna2 = "CATCGTAATGACGGCCT";

    cout << "--- Calculadora de Distancia de Hamming ---" << endl;
    cout << "Cadena 1: " << dna1 << endl;
    cout << "Cadena 2: " << dna2 << endl;

    try {
        int distance = computeHammingDistance(dna1, dna2);
        cout << "La Distancia de Hamming es: " << distance << endl; // Debe ser 7
        
        // Prueba de manejo de error (longitudes diferentes)
        cout << "\nProbando con cadenas de diferente longitud:" << endl;
        computeHammingDistance("GATC", "GAT");
    } catch (const invalid_argument& e) {
        // Se captura el error si las cadenas tienen diferente tamaño
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
