#include "Team.h"

Team::Team () {
	 m_Name = "Unknown";
	 m_ID = "Unknown";
	 m_Logo = "Unknown";
	 m_Birth = "Unknown";

	 numSponsors = 20;
	 numPlayers = 20;
	 m_Manager.resize(20);
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
	m_Birth = b;
	numSponsors = 20;
	numPlayers = 20;
	m_Manager.resize(20);
	m_Sponsors.resize(20);
	m_Player.resize(20);
	m_Coach.resize(20);
	m_Achievements.resize(20);
}
Team::~Team() 
{

}
void Team::Print() 
{
	cout << "List of teams:" << endl;
	for (int i = 0; i < m_Player.size(); i++)
		cout << *m_Player[i] << endl;
}
void Team::printInfo() {
	cout << "Information: " << endl;
	cout << "Name: " << m_Name << endl;
	cout << "ID: " << m_ID << endl;
	cout << "Logo: " << m_Logo << endl;
	cout << "Birth: " << m_Birth << endl;
}
void Team::printAchievements() {
	cout << "Achievements:" << endl;
	for (int i = 0; i < m_Achievements.size(); i++)
		cout << m_Achievements[i] << endl;
}
void Team::Add(int x) {
	//Thêm một người vào đội
	if (x == 1){
		Manager * a;
		a->input();
		m_Manager.push_back(a);
	}
	else if (x == 2){
		Person * b;
		b->input();
		m_Sponsors.push_back(b);
	}
	else if (x == 3){
		Player* c;
		c->input();
		m_Player.push_back(c);
	}
	else if (x == 4){
		Coach * d;
		d->input();
		m_Coach.push_back(d);
	}
	else
	{
		throw "Try again!";
	}
}
void Team::Subtract(int x) {
	//Xoá một người khỏi đội
	if (x == 1)
		m_Manager.pop_back();
	else if (x == 2)
		m_Sponsors.pop_back();
	else if (x == 3)
		m_Player.pop_back();
	else if (x == 4)
		m_Coach.pop_back();
}
void Team::Dissolution() {
	m_Name = "Unknown";
	m_ID = "Unknown";
	m_Logo = "Unknown";
	m_Birth = "Unknown";
	m_Manager.clear();
	m_Sponsors.clear();
	m_Player.clear();
	m_Coach.clear();
	m_Achievements.clear();
}	  

void Team::input()
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
	getline(cin, m_Birth);

	cout << "Enter manager of team: ";
	m_Manager->input();

	cout << "Enter number of players: ";
	cin >> numPlayers;
	if (numPlayers > 20) m_Player.resize(numPlayers);
	for (int i = 0; i < numPlayers; i++)
	{
		m_Player[i]->input();
	}

	cout << "Enter number of sponsors: ";
	cin >> numSponsors;
	if (numSponsors > 20) m_Sponsors.resize(numSponsors);
	for (int i = 0; i < numSponsors; i++)
	{
		m_Sponsors[i]->input();
	}


	cout << "Enter number of coaches: ";
	cin >> numCoach;
	if (numCoach > 20) m_Coach.resize(numCoach);
	for (int i = 0; i < numCoach; i++)
	{
		m_Coach[i]->input();
	}

	cout << "Enter finance status: ";
	m_Finance->input();


}