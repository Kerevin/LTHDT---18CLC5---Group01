#include "Team.h"

Team::Team () {

	 m_Name = "Unknown";
	 m_ID = "Unknown";
	 m_Logo = "Unknown";
	 m_EstablishedDate = "Unknown";
	 m_Stadium = NULL;
	 this->numSponsors = 0;
	 this->numPlayers = 0;
	 m_Coach = new Coach();
}

Team::Team(string n, string i, string l, string b)
{
	m_Name = n;
	m_ID = i;
	m_Logo = l;
	m_EstablishedDate = b;
	m_Stadium = NULL;
	numSponsors = 0;
	numPlayers = 0;
	m_Coach = new Coach();
}

Team::~Team() 
{

}

void Team::Output()
{
	printInfo();
	cout << endl;
	printAchievements();
	cout << endl;
	printPlayersList();
	cout << endl;
	cout << "Coach: " << m_Coach->getName();
}

void Team::printPlayersList()
{
	cout <<"Number player: "<< numPlayers << endl;
	if (numPlayers > 0)
	{
		cout << "List of players in my teams: " << endl;
		for (int i = 0; i < numPlayers; i++)
		{
			m_Player[i]->Output();
			cout << endl;
		}
	}
	else
	{
		cout << "There is no player in your team!" << endl;
	}
}

void Team::printInfo() {
	cout << "Name of team: " << m_Name << endl;
	cout << "ID: " << m_ID << endl;
	cout << "Logo: " << m_Logo << endl;
	cout << "Established Date: " << m_EstablishedDate << endl;
}

void Team::printAchievements() {
	if (numAchievement > 0)
	{
		cout << "Achievements we have got:" << endl;
		for (int i = 0; i < numAchievement; i++)
			cout << m_Achievements[i] << endl;
	}
}

void Team::setStadium(Stadium * s)
{
	if (m_Stadium != NULL)
	{
		delete m_Stadium;
	}
	m_Stadium = s;
	
}

void Team::setStadium()
{
	if (m_Stadium != NULL)
	{
		delete m_Stadium;
	}
	m_Stadium = new Stadium;
	m_Stadium->Input();

}

Finance& Team::getFinance()
{
	return *this->m_Finance;
}

void Team::addPerson() {
	Person * p;
	int ch;
	cout << "Position that you want to recruit: ";
	do
	{
		cout << endl << "(1: Coach; 2: Player)";
		cin >> ch;
	} while (ch > 2);
	cin.ignore(1);
	if (ch == 1)
	{
		p = new Coach();
	}
	else
	{
		p = new Player();
		m_Player.push_back((Player *) p);
		numPlayers++;

	}
	p->Input();
}

void Team::Dissolution() {
	// -------------------- //

	// Hàm này đéo cứu được //

	// -------------------- //
	m_Name = "Unknown";
	m_ID = "Unknown";
	m_Logo = "Unknown";
	m_EstablishedDate = "Unknown";
	m_Sponsors.clear();
	m_Player.clear();
	m_Achievements.clear();
}	  

double Team::calcTotalSalary()
{
	double total=0;
	for(int i=0; i< this->numPlayers; i++)
		total+= this->m_Player[i]->getSalary();
	total+= m_Coach->getSalary();
	return total;
}

void Team::setFinanceBudget(double bud)
{
	this->m_Finance-> addMoney(bud);
}

double Team::getFinanceBudget()
{
	return this->m_Finance->getBudget();
}

void Team::Input()
{
	cout << "Enter team's name: ";
	cin.ignore();
	getline(cin, m_Name);

	cout << "Enter ID: ";
	cin.ignore();
	getline(cin, m_ID);

	cout << "Enter ID: ";
	cin.ignore();
	getline(cin, m_ID);

	cout << "Enter date of establishment: ";
	cin.ignore();
	getline(cin, m_EstablishedDate);

	cout << "Enter number of sponsors: ";
	cin >> numSponsors;
;
	for (int i = 0; i < numSponsors; i++)
	{
		Person * p = new Person;
		p->Input();
		m_Sponsors.push_back(p);
	}

	m_Coach = new Coach;
	m_Coach->Input();

	cout << "Enter finance status: ";
	m_Finance->Input();

}

void Team::inputPlayersList()
{
	// Tạo danh sách Players //
	cout << "Enter number of players: ";
	cin >> this->numPlayers;
	cin.ignore(1);
	for (int i = 0; i < this->numPlayers; i++)
	{
		Player * p = new Player();
		p->Input();
		m_Player.push_back(p);
	}
}