#pragma once
#include "Team.h"
class Manager: public Person
{
private:
	int m_Experience;
	double m_Coefficient;
	string m_Skills;
	Coach *m_Coach;
public:
	Manager();
	Manager(string name,string dob,string nationality,string id,double salary,int experience,double coefficient,string skills, Coach *c);
	~Manager();
//Phan set
	void setExperience(int ex);
	void setCoefficient(double s);
	void setSkills(string sk);
	void setTeam(Team *t);
	void setCoach(Coach *c);
//Phan get
	int getExperience();
	double getCoefficient();
	string getSkills();
	Coach &getCoach();
//Phan function
	void Input();
	void Output();
	void paySalary();
	void fire(int num);
	void recruit(int );
};