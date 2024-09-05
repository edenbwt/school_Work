#include <iostream>
#include "entreprise.h"

int main() {
    // Test default constructor
    Entreprise e1;
    std::cout << "Entreprise par défaut: " << e1.getNomEntreprise()
        << " - " << e1.getVilleEntreprise() << std::endl;

    // Test parameterized constructor
    Entreprise e2("TechCorp", "Paris");
    std::cout << "Entreprise paramétrée: " << e2.getNomEntreprise()
        << " - " << e2.getVilleEntreprise() << std::endl;

    // Test copy constructor
    Entreprise e3 = e2;
    std::cout << "Entreprise copiée: " << e3.getNomEntreprise()
        << " - " << e3.getVilleEntreprise() << std::endl;

    // Test assignment operator
    e1 = e3;
    std::cout << "Entreprise après affectation: " << e1.getNomEntreprise()
        << " - " << e1.getVilleEntreprise() << std::endl;

    // Test mutators
    e1.setEntreprise("InnovateCorp");
    e1.setVilleEntreprise("Lyon");
    std::cout << "Entreprise modifiée: " << e1.getNomEntreprise()
        << " - " << e1.getVilleEntreprise() << std::endl;

    return 0;
}
