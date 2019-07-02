#pragma once
#include "Finance.h"
#include "Coach.h"
#include "Player.h"
#include "Stadium.h"
class Team 
{
private:
	string m_Name;
	string m_ID;
	string m_Logo;
	string m_EstablishedDate;
	Stadium * m_Stadium;
	vector <Person *> m_Sponsors;
	int numSponsors; 
	vector <Player *> m_Player;
	int numPlayers;
	Coach * m_Coach;
	Finance *m_Finance;
	vector<string> m_Achievements;
	int numAchievement;
public:
	Team();
	Team(string n, string i, string l, string b);
	~Team();

//Function:
	double getFinanceBudget();
	void setFinanceBudget(double bud);
	void setStadium(Stadium *);
	void setStadium();

	Finance& getFinance();
	double TotalSalary();//Tính t?ng luong các c?u th?
	void Input();
	void Output();
	void printInfo();
	void printAchievements();
	void addPerson(int);
	void inputPlayersList();
	void Dissolution();

};