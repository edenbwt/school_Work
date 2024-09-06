/*****************************************************************//**
 * \file   gitclasscpp.cpp
 * \brief  Exemple d'assignation de mission à une entreprise
 *
 * Ce programme crée une entreprise, lui assigne une mission et
 * affiche les détails de la mission.
 *
 * \author Eden
 * \date   Septembre 2024
 *********************************************************************/

#include <iostream>
#include "entreprise.h"
#include "mission.h"

 /**
  * \brief Fonction principale
  *
  * Cette fonction crée une entreprise et lui assigne une mission.
  * Elle définit la description, le nombre de personnes et le nombre
  * d'heures pour la mission, puis affiche les détails.
  *
  * \return int Retourne 0 en cas de succès.
  */
int main() {

    Entreprise e1("TechCorp", "Paris");

    Mission mission1;
    mission1.setDescription("Développer une nouvelle plateforme logicielle");
    mission1.setNombredepersonne(20);
    mission1.setNbHeures(500);

    e1.assignMission(mission1);

    e1.printMissionDetails();

    return 0;
}
