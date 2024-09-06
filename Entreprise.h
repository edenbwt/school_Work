#ifndef ENTREPRISE_H
#define ENTREPRISE_H

#include <iostream>
#include <string>
#include "mission.h"

/*****************************************************************//**
 * \class Entreprise
 * \brief Classe repr�sentant une entreprise
 *
 * Cette classe permet de g�rer une entreprise, incluant son nom, sa ville,
 * et la mission qui lui est assign�e.
 *********************************************************************/
class Entreprise {
private:
    std::string nomEntreprise;     //!< Nom de l'entreprise
    std::string villeEntreprise;   //!< Ville de l'entreprise
    Mission entrepriseMission;     //!< Mission assign�e � l'entreprise

public:
    /**
     * \brief Constructeur par d�faut
     */
    Entreprise();

    /**
     * \brief Destructeur
     */
    ~Entreprise();

    /**
     * \brief Constructeur de copie
     * \param entre Entreprise � copier
     */
    Entreprise(const Entreprise& entre);

    /**
     * \brief Op�rateur d'affectation
     * \param entre Entreprise � assigner
     * \return R�f�rence � l'entreprise assign�e
     */
    Entreprise& operator = (const Entreprise& entre);

    /**
     * \brief Constructeur avec param�tres
     * \param nom Nom de l'entreprise
     * \param ville Ville de l'entreprise
     */
    Entreprise(std::string nom, std::string ville);

    /**
     * \brief Retourne le nom de l'entreprise
     * \return std::string Nom de l'entreprise
     */
    std::string getNomEntreprise();

    /**
     * \brief D�finit le nom de l'entreprise
     * \param nouveauNom Nouveau nom de l'entreprise
     */
    void setEntreprise(std::string nouveauNom);

    /**
     * \brief Retourne la ville de l'entreprise
     * \return std::string Ville de l'entreprise
     */
    std::string getVilleEntreprise();

    /**
     * \brief D�finit la ville de l'entreprise
     * \param nouvelleVille Nouvelle ville de l'entreprise
     */
    void setVilleEntreprise(std::string nouvelleVille);

    /**
     * \brief Assigne une mission � l'entreprise
     * \param mission Mission � assigner
     */
    void assignMission(const Mission& mission);

    /**
     * \brief Affiche les d�tails de la mission assign�e
     */
    void printMissionDetails();
};

#endif
