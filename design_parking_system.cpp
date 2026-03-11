#include <iostream>
#include <vector>

using namespace std;

class ParkingSystem {
private:
    // array para guardar espacios disponibles:
    // index 0 -> vacio (no se usa)
    // index 1 -> big (grande)
    // index 2 -> medium (mediano)
    // index 3 -> small (pequeño)
    int spaces[4];

public:
    ParkingSystem(int big, int medium, int small) {
        spaces[1] = big;
        spaces[2] = medium;
        spaces[3] = small;
    }
    
    bool addCar(int carType) {
        if (spaces[carType] > 0) {
            spaces[carType]--;
            return true;
        }
        return false;
    }
};

// Función principal para probar el código
int main() {
    cout << "Iniciando Sistema de Parqueo..." << endl;
    
    // Crear el sistema con 1 espacio grande, 1 mediano y 0 pequeños
    ParkingSystem* parkingSystem = new ParkingSystem(1, 1, 0);
    
    cout << "Intentando parquear carro grande (1): " << (parkingSystem->addCar(1) ? "true" : "false") << endl;
    cout << "Intentando parquear carro mediano (2): " << (parkingSystem->addCar(2) ? "true" : "false") << endl;
    cout << "Intentando parquear carro pequeño (3): " << (parkingSystem->addCar(3) ? "true" : "false") << endl;
    cout << "Intentando parquear otro carro grande (1): " << (parkingSystem->addCar(1) ? "true" : "false") << endl;

    delete parkingSystem;
    return 0;
}
