#ifndef ENTREPRISE_H
#define ENTREPRISE_H

#include <iostream>
#include <string>
#include "mission.h"

/*****************************************************************//**
 * \class Entreprise
 * \brief Classe représentant une entreprise
 *
 * Cette classe permet de gérer une entreprise, incluant son nom, sa ville,
 * et la mission qui lui est assignée.
 *********************************************************************/
class Entreprise {
private:
    std::string nomEntreprise;     //!< Nom de l'entreprise
    std::string villeEntreprise;   //!< Ville de l'entreprise
    Mission entrepriseMission;     //!< Mission assignée à l'entreprise

public:
    /**
     * \brief Constructeur par défaut
     */
    Entreprise();

    /**
     * \brief Destructeur
     */
    ~Entreprise();

    /**
     * \brief Constructeur de copie
     * \param entre Entreprise à copier
     */
    Entreprise(const Entreprise& entre);

    /**
     * \brief Opérateur d'affectation
     * \param entre Entreprise à assigner
     * \return Référence à l'entreprise assignée
     */
    Entreprise& operator = (const Entreprise& entre);

    /**
     * \brief Constructeur avec paramètres
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
     * \brief Définit le nom de l'entreprise
     * \param nouveauNom Nouveau nom de l'entreprise
     */
    void setEntreprise(std::string nouveauNom);

    /**
     * \brief Retourne la ville de l'entreprise
     * \return std::string Ville de l'entreprise
     */
    std::string getVilleEntreprise();

    /**
     * \brief Définit la ville de l'entreprise
     * \param nouvelleVille Nouvelle ville de l'entreprise
     */
    void setVilleEntreprise(std::string nouvelleVille);

    /**
     * \brief Assigne une mission à l'entreprise
     * \param mission Mission à assigner
     */
    void assignMission(const Mission& mission);

    /**
     * \brief Affiche les détails de la mission assignée
     */
    void printMissionDetails();
};

#endif
