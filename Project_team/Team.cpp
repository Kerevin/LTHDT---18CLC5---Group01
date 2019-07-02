#include "Team.h"
Team::Team () {
	 m_Name = "Unknown";
	 m_ID = "Unknown";
	 m_Logo = "Unknown";
	 m_EstablishedDate = "Unknown";

	 numSponsors = 20;
	 numPlayers = 20;
	 m_Sponsors.resize(20);
	 m_Player.resize(20);
	 m_Coach.resize(20);
	 m_Achievements.resize(20);
}
Team::Team(string n, string i, string l, string b)
{
	m_Name = n;
	m_ID = i;
	m_Logo = l;
	m_EstablishedDate = b;
	numSponsors = 20;
	numPlayers = 20;
	m_Sponsors.resize(20);
	m_Player.resize(20);
	m_Coach.resize(20);
	m_Achievements.resize(20);
}
Team::~Team() 
{

}
void Team::Output() 
{
	cout << "List of teams:" << endl;
	for (int i = 0; i < m_Player.size(); i++)
	{
		 m_Player[i]->Output();
		 cout << endl;
	}
}
void Team::printInfo() {
	cout << "Information: " << endl;
	cout << "Name: " << m_Name << endl;
	cout << "ID: " << m_ID << endl;
	cout << "Logo: " << m_Logo << endl;
	cout << "Established Date: " << m_EstablishedDate << endl;
}
void Team::printAchievements() {
	cout << "Achievements:" << endl;
	for (int i = 0; i < m_Achievements.size(); i++)
		cout << m_Achievements[i] << endl;
}

Finance& Team::getFinance()
{
	return *this->m_Finance;
}
void Team::Add(int x) {
	//Thêm một người vào đội

	if (x == 2){
		Player* c;
		c->Input();
		m_Player.push_back(c);
	}
	else if (x == 3){
		Coach * d;
		d->Input();
		m_Coach.push_back(d);
	}
}

void Team::Dissolution() {
	m_Name = "Unknown";
	m_ID = "Unknown";
	m_Logo = "Unknown";
	m_EstablishedDate = "Unknown";
	m_Sponsors.clear();
	m_Player.clear();
	m_Coach.clear();
	m_Achievements.clear();
}	  

double Team::TotalSalary()
{
	double total=0;
	for(int i=0; i< this->numPlayers; i++)
		total+= this->m_Player[i]->getSalary();
	for(int i=0; i < this->numCoach; i++)
		total+= this->m_Coach[i]->getSalary();
	return total;
}

void Team::setFinanceBudget(double bud)
{
	this->m_Finance->setBudget(bud);
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
	if (numSponsors > 20) m_Sponsors.resize(numSponsors);
	for (int i = 0; i < numSponsors; i++)
	{
		m_Sponsors[i]->Input();
	}


	cout << "Enter number of coaches: ";
	cin >> numCoach;
	if (numCoach > 20) m_Coach.resize(numCoach);
	for (int i = 0; i < numCoach; i++)
	{
		m_Coach[i]->Input();
	}

	cout << "Enter finance status: ";
	m_Finance->Input();


}

void Team::inputPlayersList()
{
	int numPlayers;
	cout << "Enter number of players: ";
	cin >> numPlayers;
	cin.ignore();
	if (numPlayers > 20) m_Player.resize(numPlayers);
	for (int i = 0; i < numPlayers; i++)
	{
		m_Player[i] = new Player;
		m_Player[i]->Input();
	}

}