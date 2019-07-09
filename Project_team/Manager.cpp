#include "Manager.h"

Manager::Manager(void)
{
	this->m_Experience=0;
	this->m_Coefficient=0;
	this->m_Skills="";
}

Manager::Manager(string name, string dob, string nationality, string id, 
	             double salary, int experience,double coefficient,string skills)
	: Person(name, dob, nationality, id, salary)
{
	this->m_Experience=experience;
	this->m_Coefficient=coefficient;
	this->m_Skills=skills;
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

void Manager::fire(int num)
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

void Manager::recruit(int num)
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

void Manager::setTeam(Team *t)
{
	m_Team = t;
}


void Manager::Input()
{
	Person::Input();
	cout << "Enter Experience: ";
	cin >> m_Experience;
	cout << "Enter Coefficient: ";
	cin >> m_Coefficient;
	cin.ignore(1);

	// ----------------------------------------
	// Nếu không khởi tạo một Team trong hàm main thì sẽ khởi tạo ở đây
	// Quản lý team sẽ thông qua Manager luôn 
	// ----------------------------------------

	if (m_Team != NULL)
	{
		m_Team = new Team();
		m_Team->Input();
	}
}

void Manager::Output()
{
	cout << "*** My current team's information ***" << endl; 
	m_Team->printInfo();

}

void Manager::printInfo()
{
	Person::Output();
	cout << "Experience: " << m_Experience << endl;
	cout << "Value: " << m_Coefficient << endl;
}