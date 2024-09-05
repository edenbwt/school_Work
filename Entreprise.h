#ifndef ENTREPRISE_H
#define ENTREPRISE_H
#include <iostream>
#include <string>
#include "mission.h"

class Entreprise {
private:
    std::string nomEntreprise;
    std::string villeEntreprise;
    Mission entrepriseMission;  

public:
    Entreprise();
    ~Entreprise();
    Entreprise(const Entreprise& entre);
    Entreprise& operator = (const Entreprise& entre);

    Entreprise(std::string nom, std::string ville);

    std::string getNomEntreprise();
    void setEntreprise(std::string nouveauNom);

    std::string getVilleEntreprise();
    void setVilleEntreprise(std::string nouvelleVille);

    
    void assignMission(const Mission& mission);
    void printMissionDetails();  
};

#endif
