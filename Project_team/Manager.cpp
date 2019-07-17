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

void Manager::setTeam(Team *t)
{
	m_Team = t;
}

void Manager::Input()
{
	cout << "*** Manger's information *** " << endl;
	Person::Input();

	cout << "Enter Experience: ";
	cin >> m_Experience;

	cout << "Enter Coefficient: ";
	cin >> m_Coefficient;
	cin.ignore(1);

}
void Manager::inputTeam()
{
	m_Team->Input();
}
void Manager::outputTeam()
{
	cout << "*** My current team's information ***" << endl; 
	m_Team->Output();

}

void Manager::printPlayersList()
{
	m_Team->printPlayersList();
	cout << endl;
}
void Manager::printInfo()
{
	Person::Output();
	cout << "Experience: " << m_Experience << endl;
	cout << "Value: " << m_Coefficient << endl;
}
void Manager::printCoachInfo()
{
	m_Team->printCoachInfo();
}

void Manager::Fire()
{
	cout << "Enter role you want to fire" <<endl;
	int role=0;
	do {
		cout << "(1 : Coach ; 2 : Player) : ";
		cin >> role;
	} while (role != 1 && role != 2);
		if (role ==2)
	{
		if (this->m_Team != NULL)
		{
			if (this->m_Team->getNumPlayers() == 0)
			{
				cout << "There is no player in your team to fire!" << endl;
			}
			else
			{
				int num = 0;
				do {
					cout << "Enter number of player you want to fire: ";
					cin >> num;
					if (num <= 0)
						cout << "Number of players you want to fire has to be an positive integer." << endl;
				} while (num <= 0);
				for (int i = 0; i < num; i++)
				{
					string id;
					cin.ignore();
					cout << "Enter player's id you want to fire:";
					getline(cin, id);
					this->m_Team->FirePlayer(id);
				}
			}
		}
	}
	else
		this->m_Team->FireCoach();
}

void Manager::fire(int ch)
{
	if (ch == 1)
	{
		m_Team->FirePlayer("");
	}
	else
	{
		m_Team->FireCoach();
	}
}

void Manager::recruit(int ch)
{
	if (ch == 1)
	{
		m_Team->RecruitPlayer();
	}
	else
	{
			m_Team->RecruitCoach();
	}
}

void Manager::paySalary()
{
	time_t now = time(0);
	m_Finance->makeTransaction(ctime(&now), "paying salary.", m_Team->calcTotalSalary());
}


void  Manager::setFinanceBudget(double bud)
{
	m_Finance->addMoney(bud);
}

double Manager::getFinanceBudget()
{
	return m_Finance->getBudget();
}

void Manager::printFinaceInfo()
{
	m_Finance->Output();
}