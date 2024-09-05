#include <iostream>
#include "entreprise.h"
#include "mission.h"

int main() {
    // Test default constructor for Entreprise
    Entreprise e1;
    std::cout << "Entreprise par défaut: " << e1.getNomEntreprise()
        << " - " << e1.getVilleEntreprise() << std::endl;

    // Test parameterized constructor for Entreprise
    Entreprise e2("TechCorp", "Paris");
    std::cout << "Entreprise paramétrée: " << e2.getNomEntreprise()
        << " - " << e2.getVilleEntreprise() << std::endl;

    // Test copy constructor for Entreprise
    Entreprise e3 = e2;
    std::cout << "Entreprise copiée: " << e3.getNomEntreprise()
        << " - " << e3.getVilleEntreprise() << std::endl;

    // Test assignment operator for Entreprise
    e1 = e3;
    std::cout << "Entreprise après affectation: " << e1.getNomEntreprise()
        << " - " << e1.getVilleEntreprise() << std::endl;

    // Test mutators for Entreprise
    e1.setEntreprise("InnovateCorp");
    e1.setVilleEntreprise("Lyon");
    std::cout << "Entreprise modifiée: " << e1.getNomEntreprise()
        << " - " << e1.getVilleEntreprise() << std::endl;

    // Create a mission and associate it with an Entreprise
    Mission mission1;
    mission1.setDescription();
    mission1.setNombredepersonne();
    mission1.setNbHeures();

    std::cout << "Mission pour l'entreprise: " << e1.getNomEntreprise()
        << " - " << mission1.getDescription() << std::endl;

    return 0;
}
