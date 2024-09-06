#include "entreprise.h"
#include <iostream>

using namespace std;

/**
 * \brief Constructeur par d�faut
 */
Entreprise::Entreprise() {
    this->nomEntreprise = "anonyme";
    this->villeEntreprise = "inconnu";
}

/**
 * \brief Constructeur avec param�tres
 * \param nom Nom de l'entreprise
 * \param ville Ville de l'entreprise
 */
Entreprise::Entreprise(std::string nom, std::string ville) {
    this->nomEntreprise = nom;
    this->villeEntreprise = ville;
}

/**
 * \brief Destructeur
 */
Entreprise::~Entreprise() {
    cout << "Destruction de l'entreprise " << this->nomEntreprise << " " << this->villeEntreprise << endl;
}

/**
 * \brief Constructeur de copie
 * \param entre Entreprise � copier
 */
Entreprise::Entreprise(const Entreprise& entre) {
    cout << "Copie de l'entreprise" << endl;
    this->nomEntreprise = entre.nomEntreprise;
    this->villeEntreprise = entre.villeEntreprise;
}

/**
 * \brief Op�rateur d'affectation
 * \param entre Entreprise � assigner
 * \return R�f�rence � l'entreprise assign�e
 */
Entreprise& Entreprise::operator = (const Entreprise& entre) {
    cout << "Affectation de l'entreprise" << std::endl;
    if (this != &entre) {
        this->nomEntreprise = entre.nomEntreprise;
        this->villeEntreprise = entre.villeEntreprise;
    }
    return *this;
}

/**
 * \brief Retourne le nom de l'entreprise
 * \return std::string Nom de l'entreprise
 */
std::string Entreprise::getNomEntreprise() {
    return this->nomEntreprise;
}

/**
 * \brief D�finit le nom de l'entreprise
 * \param nouveauNom Nouveau nom de l'entreprise
 */
void Entreprise::setEntreprise(std::string nouveauNom) {
    this->nomEntreprise = nouveauNom;
}

/**
 * \brief Retourne la ville de l'entreprise
 * \return std::string Ville de l'entreprise
 */
std::string Entreprise::getVilleEntreprise() {
    return this->villeEntreprise;
}

/**
 * \brief D�finit la ville de l'entreprise
 * \param nouvelleVille Nouvelle ville de l'entreprise
 */
void Entreprise::setVilleEntreprise(std::string nouvelleVille) {
    this->villeEntreprise = nouvelleVille;
}

/**
 * \brief Assigne une mission � l'entreprise
 * \param mission Mission � assigner
 */
void Entreprise::assignMission(const Mission& mission) {
    this->entrepriseMission = mission;
}

/**
 * \brief Affiche les d�tails de la mission assign�e � l'entreprise
 */
void Entreprise::printMissionDetails() {
    cout << "Mission pour l'entreprise " << this->nomEntreprise << " :" << endl;
    cout << "Description: " << entrepriseMission.getDescription() << endl;
    cout << "Nombre de personnes: " << entrepriseMission.GetNombredepersonne() << endl;
    cout << "Nombre d'heures: " << entrepriseMission.GetnbHeure() << endl;
}
