#include <iostream>
#include <iomanip> // Para controlar los decimales en la salida (std::fixed, std::setprecision)

using namespace std;

class SpaceAge {
private:
    double age_in_seconds;
    // Constante: segundos en un año terrestre
    const double EARTH_YEAR_SECONDS = 31557600.0;

public:
    // Constructor que recibe la edad en segundos
    SpaceAge(double seconds) : age_in_seconds(seconds) {}

    // Función base para calcular años dados los periodos orbitales
    double calculateYearsOnPlanet(double orbital_period) const {
        return age_in_seconds / (EARTH_YEAR_SECONDS * orbital_period);
    }

    // Funciones específicas por planeta basadas en la tabla de la imagen
    double onMercury() const { return calculateYearsOnPlanet(0.2408467); }
    double onVenus()   const { return calculateYearsOnPlanet(0.61519726); }
    double onEarth()   const { return calculateYearsOnPlanet(1.0); }
    double onMars()    const { return calculateYearsOnPlanet(1.8808158); }
    double onJupiter() const { return calculateYearsOnPlanet(11.862615); }
    double onSaturn()  const { return calculateYearsOnPlanet(29.447498); }
    double onUranus()  const { return calculateYearsOnPlanet(84.016846); }
    double onNeptune() const { return calculateYearsOnPlanet(164.79132); }
};

int main() {
    // Caso de prueba de la imagen: 1,000,000,000 segundos
    double seconds = 1000000000.0;
    SpaceAge age(seconds);

    cout << "--- Calculadora de Edad Espacial ---" << endl;
    cout << "Edad en segundos: " << fixed << setprecision(0) << seconds << endl;
    
    // Mostramos los resultados con 2 decimales para que sea legible
    cout << fixed << setprecision(2); 
    cout << "Edad en la Tierra: " << age.onEarth() << " años terrestres." << endl; // Debe dar aprox 31.69
    cout << "Edad en Mercurio:  " << age.onMercury() << " años mercurianos." << endl;
    cout << "Edad en Venus:     " << age.onVenus() << " años venusianos." << endl;
    cout << "Edad en Marte:     " << age.onMars() << " años marcianos." << endl;
    cout << "Edad en Júpiter:   " << age.onJupiter() << " años jovianos." << endl;
    cout << "Edad en Saturno:   " << age.onSaturn() << " años saturnianos." << endl;
    cout << "Edad en Urano:     " << age.onUranus() << " años uranianos." << endl;
    cout << "Edad en Neptuno:   " << age.onNeptune() << " años neptunianos." << endl;

    return 0;
}
