/*****************************************************************//**
 * \file   gitclasscpp.cpp
 * \brief  Exemple d'assignation de mission � une entreprise
 *
 * Ce programme cr�e une entreprise, lui assigne une mission et
 * affiche les d�tails de la mission.
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
  * Cette fonction cr�e une entreprise et lui assigne une mission.
  * Elle d�finit la description, le nombre de personnes et le nombre
  * d'heures pour la mission, puis affiche les d�tails.
  *
  * \return int Retourne 0 en cas de succ�s.
  */
int main() {

    Entreprise e1("TechCorp", "Paris");

    Mission mission1;
    mission1.setDescription("D�velopper une nouvelle plateforme logicielle");
    mission1.setNombredepersonne(20);
    mission1.setNbHeures(500);

    e1.assignMission(mission1);

    e1.printMissionDetails();

    return 0;
}
