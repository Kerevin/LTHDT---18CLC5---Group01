#pragma once
#include "Finance.h"
#include "Person.h"
#include "Coach.h"
#include "Player.h"
using namespace std;

class Team {
private:
	string m_Name;
	string m_ID;
	string m_Logo;
	string m_Birth;
	Manager * m_Manager;
	vector<Person*> m_Sponsors;
	int numSponsors; 
	vector<Player * > m_Player;
	int numPlayers;
	vector<Coach*> m_Coach;
	int numCoach;
	Finance* m_Finance;

	vector<string> m_Achievements;
	int numAchievement;
public:
	Team();
	Team(string n, string i, string l, string b);
	~Team();

	void input();
	void Print();
	void printInfo();
	void printAchievements();
	void Add(int);
	void Subtract(int);
	void Dissolution();

};