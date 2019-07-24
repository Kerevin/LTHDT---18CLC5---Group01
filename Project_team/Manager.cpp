#include "Manager.h"

Manager::Manager(void)
{
	this->m_Experience=0;
	this->m_Coefficient=0;
	this->m_Skills="";
}


Manager::~Manager()
{

}


void Manager::setTeam(Team *t)
{
	m_Team = t;
}

void Manager::Input()
{
	cout << "*** Manager's information *** " << endl;
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

void Manager::printSpecificPlayer()
{
	int ch;
	if (m_Team->getNumPlayers() == 0)
		return;
	cout << "Which player do you want to see detail?" << endl;
	do
	{
		cout << ">> ";
		cin >> ch;
		cin.ignore(1);
		if (ch > m_Team->getNumPlayers())
			cout << "We only have " << m_Team->getNumPlayers() << " players" << endl;
	} while (ch > m_Team->getNumPlayers() || ch <= 0);
	system("CLS");
	m_Team->printSpecificPlayer(ch);
	
}
void Manager::printPlayersList()
{
	m_Team->printPlayersList();
	cout << endl;
}
void Manager::printInfo()
{
	cout << "------------------------------" << endl;
	cout << "           About you          " << endl;
	Person::Output();
	cout << "Experience: " << m_Experience << endl;
	cout << "Coefficient: " << m_Coefficient << endl;
}
void Manager::printCoachInfo()
{
	m_Team->printCoachInfo();
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
	m_Finance->makeTransaction(ctime(&now), "paying salary.", -m_Team->calcTotalSalary());
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

void Manager::transferPlayer()
{

	printPlayersList();
	if (m_Team->getNumPlayers() == 0)
	{
		cout << "There is no player in your team." << endl;
		return;
	}
	int ch;
	cout << "Which player do you want to transfer?";
	do {
		cout << ">> ";
		cin >> ch;
		if (ch > m_Team->getNumPlayers())
			cout << "We only have " << m_Team->getNumPlayers() << " players" << endl;
	} while (ch > m_Team->getNumPlayers() || ch <= 0);
	cin.ignore(1);
	time_t now = time(0);
	m_Finance->makeTransaction(ctime(&now), "transfering player.", m_Team->getSpecificPlayerValue(ch));
	m_Team->transferPlayer(ch);
	
}

void Manager::inputStadium()
{
	cout << "*** Training Stadium ***" << endl;
	m_Stadium->Input();
}

void Manager::printStadium()
{
	cout << "*** Training Stadium Information ***" << endl;
	m_Stadium->Output();
}