#ifndef MISSION_H
#define MISSION_H

#include <iostream>
#include <string>

/*****************************************************************//**
 * \class Mission
 * \brief Classe repr�sentant une mission
 *
 * Cette classe permet de g�rer les d�tails d'une mission, incluant
 * le nombre de personnes assign�es, la description et le nombre d'heures.
 *********************************************************************/
class Mission {
public:
    /**
     * \brief Constructeur par d�faut
     */
    Mission();

    /**
     * \brief Destructeur
     */
    ~Mission();

    /**
     * \brief Constructeur de copie
     * \param miss Mission � copier
     */
    Mission(const Mission& miss);

    /**
     * \brief Op�rateur d'affectation
     * \param miss Mission � assigner
     * \return R�f�rence � la mission assign�e
     */
    Mission& operator = (const Mission& miss);

    /**
     * \brief Retourne le nombre de personnes assign�es � la mission
     * \return int Nombre de personnes
     */
    int GetNombredepersonne();

    /**
     * \brief D�finit le nombre de personnes pour la mission
     * \param nb Nombre de personnes
     */
    void setNombredepersonne(int nb);

    /**
     * \brief Retourne la description de la mission
     * \return std::string Description de la mission
     */
    std::string getDescription();

    /**
     * \brief D�finit la description de la mission
     * \param desc Description de la mission
     */
    void setDescription(const std::string& desc);

    /**
     * \brief Retourne le nombre d'heures estim�es pour la mission
     * \return int Nombre d'heures
     */
    int GetnbHeure();

    /**
     * \brief D�finit le nombre d'heures pour la mission
     * \param nbHeures Nombre d'heures
     */
    void setNbHeures(int nbHeures);

private:
    int nbPerssone;                //!< Nombre de personnes assign�es
    std::string descriptionMission; //!< Description de la mission
    int nbHeure;                    //!< Nombre d'heures estim�es
};

#endif
