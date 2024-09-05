#include <iostream>
#include "entreprise.h"
#include "mission.h"

int main() {
    
    Entreprise e1("TechCorp", "Paris");

    
    Mission mission1;
    mission1.setDescription("Develop new software platform");
    mission1.setNombredepersonne(20);
    mission1.setNbHeures(500);

    
    e1.assignMission(mission1);

    
    e1.printMissionDetails();

    return 0;
}
