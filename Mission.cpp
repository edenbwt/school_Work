#include "mission.h"
#include <iostream>

// Default constructor
Mission::Mission() : nbPerssone(0), descriptionMission(""), nbHeure(0) {}

// Destructor
Mission::~Mission() {}

// Copy constructor
Mission::Mission(const Mission& miss) : nbPerssone(miss.nbPerssone), descriptionMission(miss.descriptionMission), nbHeure(miss.nbHeure) {}

// Assignment operator
Mission& Mission::operator=(const Mission& miss) {
    if (this != &miss) {
        this->nbPerssone = miss.nbPerssone;
        this->descriptionMission = miss.descriptionMission;
        this->nbHeure = miss.nbHeure;
    }
    return *this;
}

// Getter and setter for number of people
int Mission::GetNombredepersonne() {
    return nbPerssone;
}

int Mission::setNombredepersonne() {
    return nbPerssone;
}

// Getter and setter for mission description
std::string Mission::getDescription() {
    return descriptionMission;
}

std::string Mission::setDescription() {
    return descriptionMission;
}

// Getter and setter for number of hours
int Mission::GetnbHeure() {
    return nbHeure;
}

int Mission::setNbHeures() {
    return nbHeure;
}

// Placeholder methods for entreprise mission handling
void Mission::SetEntreprisseMission() {
    // Implementation for associating the mission with the company
}

void Mission::GetEntreprisseMission() {
    // Implementation for retrieving the company's mission
}
