#include <iostream>
#include <iomanip>

using namespace std;

class SpaceAge {
private:
    double age_in_seconds;
    const double EARTH_YEAR_SECONDS = 31557600.0;
public:
   
    SpaceAge(double seconds) : age_in_seconds(seconds) {}

    double calculateYearsOnPlanet(double orbital_period) const {
        return age_in_seconds / (EARTH_YEAR_SECONDS * orbital_period);
    }

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
    // Caso de prueba: 1,000,000,000 segundos
    double seconds = 1000000000.0;
    SpaceAge age(seconds);

    cout << "Calculadora de Edad Espacial" << endl;
    cout << "Edad en segundos: " << fixed << setprecision(0) << seconds << endl;
    cout << fixed << setprecision(2); 
    cout << "Edad en la Tierra: " << age.onEarth() << " años terrestres." << endl;
    cout << "Edad en Mercurio:  " << age.onMercury() << " años mercurianos." << endl;
    cout << "Edad en Venus:     " << age.onVenus() << " años venusianos." << endl;
    cout << "Edad en Marte:     " << age.onMars() << " años marcianos." << endl;
    cout << "Edad en Júpiter:   " << age.onJupiter() << " años jovianos." << endl;
    cout << "Edad en Saturno:   " << age.onSaturn() << " años saturnianos." << endl;
    cout << "Edad en Urano:     " << age.onUranus() << " años uranianos." << endl;
    cout << "Edad en Neptuno:   " << age.onNeptune() << " años neptunianos." << endl;

    return 0;
}
