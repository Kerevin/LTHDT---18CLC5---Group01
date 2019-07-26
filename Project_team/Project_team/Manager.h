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
	Stadium *m_Stadium = new Stadium();

public:
	Manager();
	~Manager();

	void setTeam(Team *t);


	
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

	virtual void changeCoachSalary(double );
	virtual void paySalary();
	virtual double getFinanceBudget();
	virtual void setFinanceBudget(double bud);

};