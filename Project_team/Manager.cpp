#include "Manager.h"

Manager::Manager(void)
{
	this->m_Experience=0;
	this->m_Coefficient=0;
	this->m_Skills="";

	this->m_Coach=new Coach;
}

Manager::Manager(string name,string dob,string nationality,string id,double salary,int experience,double coefficient,string skills, Coach *c)
	: Person(name,dob,nationality,id,salary)
{
	this->m_Experience=experience;
	this->m_Coefficient=coefficient;
	this->m_Skills=skills;
	this->m_Coach=new Coach;
}

Manager::~Manager()
{

}

void Manager::setExperience(int ex)
{
	this->m_Experience=ex;
}

void Manager::setCoefficient(double coeff)
{
	this->m_Coefficient=coeff;
}

void Manager::setSkills(string sk)
{
	this->m_Skills=sk;
}

void Manager::setCoach(Coach *c)
{
	this->m_Coach=c;
}

int Manager::getExperience()
{
	return this->m_Experience;
}

double Manager::getCoefficient()
{
	return this->m_Coefficient;
}

string Manager::getSkills()
{
	return this->m_Skills;
}


Coach& Manager::getCoach()
{
	return *(this->m_Coach);
}


void Manager::Fire(int num)
{
	string temp;
	cout<<"Choose role of person you want to fire:";
	getline(cin,temp);
	int x;
	if(temp=="Manager" || temp=="manager" || temp== "Managers" || temp== "managers")
		x=1;
	else if(temp== "Player" || temp== "player" || temp== "Players" || temp=="players")
		x=2;
		else if(temp=="Coach" || temp== "coach" || temp=="Coaches" || temp =="coaches")
			x=3;
		else
			cout<<"You have entered wrong role"<<endl;
}

void Manager::Recruit(int num)
{
	string temp;
	cout<<"Choose role of person you want to recruit:";
	getline(cin,temp);
	int x;
	if(temp=="Manager" || temp=="manager" || temp== "Managers" || temp== "managers")
		x=1;
	else if(temp== "Player" || temp== "player" || temp== "Players" || temp=="players")
		x=2;
		else if(temp=="Coach" || temp== "coach" || temp=="Coaches" || temp =="coaches")
			x=3;;
	
}
