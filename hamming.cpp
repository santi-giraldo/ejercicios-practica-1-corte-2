#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;
int computeHammingDistance(const string& strand1, const string& strand2) {
    // 1. Validar que las longitudes sean iguales
    if (strand1.length() != strand2.length()) {
        throw invalid_argument("Las secuencias de ADN deben tener la misma longitud.");
    }

    int distance = 0;
    for (size_t i = 0; i < strand1.length(); ++i) {
        if (strand1[i] != strand2[i]) {
            distance++;
        }
    }

    // 3. Retornar la distancia total
    return distance;
}

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

// Función para calcular la Distancia de Hamming
int computeHammingDistance(const string& strand1, const string& strand2) {
    if (strand1.length() != strand2.length()) {
        throw invalid_argument("Las secuencias de ADN deben tener la misma longitud.");
    }
    int distance = 0;
    for (size_t i = 0; i < strand1.length(); ++i) {
        if (strand1[i] != strand2[i]) {
            distance++;
        }
    }
    return distance;
}

int main() {
    cout << "CALCULADORA DE DISTANCIA DE HAMMING " << endl;

    // Caso 1
    string dna1_a = "GAGCCTACTAACGGGAT";
    string dna1_b = "CATCGTAATGACGGCCT";
    cout << "\n[ Caso 1 ]" << endl;
    cout << "Cadena A: " << dna1_a << endl;
    cout << "Cadena B: " << dna1_b << endl;
    cout << "-> Distancia de Hamming: " << computeHammingDistance(dna1_a, dna1_b) << " (Esperado: 7)" << endl;

    // Caso 2
    string dna2_a = "GATTACA";
    string dna2_b = "GACTATA";
    cout << "\n[ Caso 2 ]" << endl;
    cout << "Cadena A: " << dna2_a << endl;
    cout << "Cadena B: " << dna2_b << endl;
    cout << "-> Distancia de Hamming: " << computeHammingDistance(dna2_a, dna2_b) << " (Esperado: 2)" << endl;

    // Caso 3
    string dna3_a = "GGACGATCGC";
    string dna3_b = "AGACAATCTC";
    cout << "\n[ Caso 3 ]" << endl;
    cout << "Cadena A: " << dna3_a << endl;
    cout << "Cadena B: " << dna3_b << endl;
    cout << "-> Distancia de Hamming: " << computeHammingDistance(dna3_a, dna3_b) << " (Esperado: 3)" << endl;

    // Caso 4
    cout << "\n[ Caso 4: Prueba de Error ]" << endl;
    string err_a = "GATC";
    string err_b = "GAT";
    cout << "Cadena A: " << err_a << " (Longitud: " << err_a.length() << ")" << endl;
    cout << "Cadena B: " << err_b << "  (Longitud: " << err_b.length() << ")" << endl;
    try {
        computeHammingDistance(err_a, err_b);
    } catch (const invalid_argument& e) {
        cout << "-> Error capturado correctamente: " << e.what() << endl;
    }

    return 0;
}

