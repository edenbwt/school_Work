#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>

class Mission {
public:
    Mission();
    ~Mission();
    Mission(const Mission& miss);
    Mission& operator = (const Mission& miss);

    int GetNombredepersonne();
    void setNombredepersonne(int nb);

    std::string getDescription();
    void setDescription(const std::string& desc);

    int GetnbHeure();
    void setNbHeures(int nbHeures);

private:
    int nbPerssone;
    std::string descriptionMission;
    int nbHeure;
};

#endif
