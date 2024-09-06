#ifndef MISSION_H
#define MISSION_H

#include <iostream>
#include <string>

/*****************************************************************//**
 * \class Mission
 * \brief Classe représentant une mission
 *
 * Cette classe permet de gérer les détails d'une mission, incluant
 * le nombre de personnes assignées, la description et le nombre d'heures.
 *********************************************************************/
class Mission {
public:
    /**
     * \brief Constructeur par défaut
     */
    Mission();

    /**
     * \brief Destructeur
     */
    ~Mission();

    /**
     * \brief Constructeur de copie
     * \param miss Mission à copier
     */
    Mission(const Mission& miss);

    /**
     * \brief Opérateur d'affectation
     * \param miss Mission à assigner
     * \return Référence à la mission assignée
     */
    Mission& operator = (const Mission& miss);

    /**
     * \brief Retourne le nombre de personnes assignées à la mission
     * \return int Nombre de personnes
     */
    int GetNombredepersonne();

    /**
     * \brief Définit le nombre de personnes pour la mission
     * \param nb Nombre de personnes
     */
    void setNombredepersonne(int nb);

    /**
     * \brief Retourne la description de la mission
     * \return std::string Description de la mission
     */
    std::string getDescription();

    /**
     * \brief Définit la description de la mission
     * \param desc Description de la mission
     */
    void setDescription(const std::string& desc);

    /**
     * \brief Retourne le nombre d'heures estimées pour la mission
     * \return int Nombre d'heures
     */
    int GetnbHeure();

    /**
     * \brief Définit le nombre d'heures pour la mission
     * \param nbHeures Nombre d'heures
     */
    void setNbHeures(int nbHeures);

private:
    int nbPerssone;                //!< Nombre de personnes assignées
    std::string descriptionMission; //!< Description de la mission
    int nbHeure;                    //!< Nombre d'heures estimées
};

#endif
