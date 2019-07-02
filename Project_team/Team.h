#pragma once
#include "Finance.h"
#include "Coach.h"
#include "Player.h"
class Team 
{
private:
	string m_Name;
	string m_ID;
	string m_Logo;
	string m_EstablishedDate;
	vector <Person *> m_Sponsors;
	int numSponsors; 
	vector <Player *> m_Player;
	int numPlayers;
	vector <Coach *> m_Coach;
	int numCoach;
	Finance *m_Finance;

	vector<string> m_Achievements;
	int numAchievement;
public:
	Team();
	Team(string n, string i, string l, string b);
	~Team();

//Function:
	void setNumPlayers(int num);
	int getNumPlayers();
	double getFinanceBudget();
	void setFinanceBudget(double bud);
	Finance& getFinance();
	double TotalSalary();//Tính t?ng luong các c?u th?
	void Input();
	void Output();
	void printInfo();
	void printAchievements();
	void Add(int);
	void inputPlayersList();
	void Dissolution();

};