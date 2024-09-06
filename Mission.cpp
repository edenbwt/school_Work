/*****************************************************************//**
 * \file   mission.cpp
 * \brief  Impl�mentation de la classe Mission
 *
 * Ce fichier impl�mente les m�thodes de la classe Mission,
 * permettant de g�rer les attributs d'une mission.
 *
 * \author Eden
 * \date   Septembre 2024
 *********************************************************************/

#include "mission.h"
#include <iostream>

 /**
  * \brief Constructeur par d�faut
  */
Mission::Mission() : nbPerssone(0), descriptionMission(""), nbHeure(0) {}

/**
 * \brief Destructeur
 */
Mission::~Mission() {}

/**
 * \brief Constructeur de copie
 */
Mission::Mission(const Mission& miss)
    : nbPerssone(miss.nbPerssone), descriptionMission(miss.descriptionMission), nbHeure(miss.nbHeure) {}

/**
 * \brief Op�rateur d'affectation
 */
Mission& Mission::operator=(const Mission& miss) {
    if (this != &miss) {
        this->nbPerssone = miss.nbPerssone;
        this->descriptionMission = miss.descriptionMission;
        this->nbHeure = miss.nbHeure;
    }
    return *this;
}

/**
 * \brief Retourne le nombre de personnes assign�es � la mission
 * \return int Nombre de personnes
 */
int Mission::GetNombredepersonne() {
    return nbPerssone;
}

/**
 * \brief D�finit le nombre de personnes assign�es � la mission
 * \param nb Nombre de personnes
 */
void Mission::setNombredepersonne(int nb) {
    this->nbPerssone = nb;
}

/**
 * \brief Retourne la description de la mission
 * \return std::string Description de la mission
 */
std::string Mission::getDescription() {
    return descriptionMission;
}

/**
 * \brief D�finit la description de la mission
 * \param desc Description de la mission
 */
void Mission::setDescription(const std::string& desc) {
    this->descriptionMission = desc;
}

/**
 * \brief Retourne le nombre d'heures estim�es pour la mission
 * \return int Nombre d'heures
 */
int Mission::GetnbHeure() {
    return nbHeure;
}

/**
 * \brief D�finit le nombre d'heures estim�es pour la mission
 * \param nbHeures Nombre d'heures
 */
void Mission::setNbHeures(int nbHeures) {
    this->nbHeure = nbHeures;
}
