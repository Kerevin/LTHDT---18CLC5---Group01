#pragma once
#include "Team.h"
#include <ctime>
class Manager: virtual public Person
{
private:
	int m_Experience;
	double m_Coefficient;
	Team * m_Team = new Team();
	Finance * m_Finance = new Finance();
	Stadium *m_Stadium = new Stadium();

public:
	Manager();
	~Manager();

	void setTeam(Team *t);

	void setExperience(int);
	void setCoefficient(double);

	int getExperience();
	double getCoefficient();

	
	void Input();
	void outputTeam();
	void inputTeam();
	void inputStadium();

	void printSpecificPlayer(); 
	void printPlayersList();
	void printCoachInfo();
	void printInfo();
	void printFinaceInfo();
	void printStadium();

	void transferPlayer();
	void recruit(int );
	void fireCoach();

	virtual void changePlayerSalary();
	virtual void changeCoachSalary();
	virtual void paySalary();
	virtual double getFinanceBudget();
	virtual void setFinanceBudget(double bud);

};