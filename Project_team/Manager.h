#pragma once
#include "Team.h"
class Manager: virtual public Person
{
private:
	int m_Experience;
	double m_Coefficient;
	string m_Skills;	
	Team * m_Team = NULL;
public:
	Manager();
	Manager(string name,string dob,string nationality,string id,double salary,int experience,double coefficient,string skills);
	~Manager();
//Phan set
	void setExperience(int ex);
	void setCoefficient(double s);
	void setSkills(string sk);
	void setTeam(Team *t);

//Phan get
	int getExperience();
	double getCoefficient();
	string getSkills();
	
	void Input();
	void outputTeam();

	void printPlayersList();
	void printCoachInfo();
	void printInfo();

	void paySalary();

	void recruit(int );
	void fire(int);
	void Fire();
};