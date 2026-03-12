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

int main() {
    cout << "--- Calculadora de Distancia de Hamming ---" << endl;

    // Caso 1:
    string dna1_a = "GAGCCTACTAACGGGAT";
    string dna1_b = "CATCGTAATGACGGCCT";
    cout << "Caso 1 -> Distancia: " << computeHammingDistance(dna1_a, dna1_b) << " (Esperado: 7)" << endl;

    // Caso 2
    string dna2_a = "GATTACA";
    string dna2_b = "GACTATA";
    cout << "Caso 2 -> Distancia: " << computeHammingDistance(dna2_a, dna2_b) << " (Esperado: 2)" << endl;

    // Caso 3
    string dna3_a = "GGACGATCGC";
    string dna3_b = "AGACAATCTC";
    cout << "Caso 3 -> Distancia: " << computeHammingDistance(dna3_a, dna3_b) << " (Esperado: 3)" << endl;

    // Caso 4
    try {
        cout << "\nProbando error con diferentes longitudes..." << endl;
        computeHammingDistance("GATC", "GAT");
    } catch (const invalid_argument& e) {
        cout << "Error capturado correctamente: " << e.what() << endl;
    }

    return 0;
}

