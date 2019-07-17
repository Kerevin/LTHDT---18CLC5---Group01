#pragma once
#include "Team.h"
#include <ctime>
class Manager: virtual public Person
{
private:
	int m_Experience;
	double m_Coefficient;
	string m_Skills;	
	Team * m_Team = new Team();
	Finance * m_Finance = new Finance();

public:
	Manager();
	Manager(string name,string dob,string nationality,string id,double salary,int experience,double coefficient,string skills);
	~Manager();

	void setExperience(int ex);
	void setCoefficient(double s);
	void setSkills(string sk);
	void setTeam(Team *t);

	int getExperience();
	double getCoefficient();
	string getSkills();
	
	void Input();
	void outputTeam();
	void inputTeam();

	void printSpecificPlayer(); 

	void printPlayersList();
	void printCoachInfo();
	void printInfo();
	void printFinaceInfo();



	void recruit(int );
	void fire(int);
	void Fire();


	virtual void paySalary();
	virtual double getFinanceBudget();
	virtual void setFinanceBudget(double bud);

};