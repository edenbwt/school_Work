#include "entreprise.h"



using namespace std;


 
Entreprise::Entreprise() {

	this->nomEntreprise = "anonyme";
	this->villeEntreprise = "inconnu";

}


Entreprise::Entreprise(std::string nom, std::string ville) {
	this->nomEntreprise = nom;

	this->villeEntreprise = ville;
}


Entreprise::~Entreprise() {

	cout << "Destrcution de l'entreprise " << this->nomEntreprise << " " << this->villeEntreprise << endl;

}


Entreprise::Entreprise(const Entreprise& entre)
{
    cout << "Copie de Capitaine" << endl;
    this->nomEntreprise = entre.nomEntreprise;
    this->villeEntreprise = entre.villeEntreprise;

}


Entreprise &Entreprise::operator = (const Entreprise& entre)
{ 
    cout << "Affectation de l'entreprise" << std::endl;
    if (this != &entre)  
    {
        this->nomEntreprise = entre.nomEntreprise;
        this->villeEntreprise = entre.villeEntreprise;
    }
    return *this;
}



std::string Entreprise::getNomEntreprise()
{
    return this->nomEntreprise;
}


void Entreprise::setEntreprise(std::string nouveauNom){
    this->nomEntreprise = nouveauNom;
}


std::string Entreprise::getVilleEntreprise() {
    return this->villeEntreprise;
}



void  Entreprise::setVilleEntreprise(std::string nouvelleVille) {
    this->villeEntreprise = nouvelleVille;
}

void Entreprise::assignMission(const Mission& mission) {
    this->entrepriseMission = mission;
}


void Entreprise::printMissionDetails() {
    cout << "Mission pour l'entreprise " << this->nomEntreprise << ":" << endl;
    cout << "Description: " << entrepriseMission.getDescription() << endl;
    cout << "Nombre de personnes: " << entrepriseMission.GetNombredepersonne() << endl;
    cout << "Nombre d'heures: " << entrepriseMission.GetnbHeure() << endl;
}