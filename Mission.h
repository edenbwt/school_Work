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
	int setNombredepersonne();

	std::string setDescription();
	std::string getDescription();

	int setNbHeures();
	int GetnbHeure();

	void SetEntreprisseMission();
	void GetEntreprisseMission();


private:
	int nbPerssone;
	std::string descriptionMission;
	int nbHeure;



protected:






};
#endif