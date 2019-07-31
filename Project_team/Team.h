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
	string m_EstablishedDate;

	vector <Person *> m_Sponsors;	
	int numSponsors; 

	vector <Player *> m_Player;
	int numPlayers;

	Coach * m_Coach;

	vector<string> m_Achievements;
	int numAchievement;
public:
	Team();
	virtual ~Team();


	virtual double calcTotalSalary();
	virtual void  changeCoachSalary(double );


	virtual int getNumPlayers();
	virtual void setPlayerSalary(int, double);
	virtual double getSpecificPlayerValue(int );
	virtual void FirePlayer(string id);
	virtual void FireCoach();	
	virtual void RecruitPlayer();
	virtual void RecruitCoach();
	virtual void transferPlayer(int i);

	void Input();
	void Output();
	void printInfo();
	void printAchievements();
	void printPlayersList();
	void inputPlayersList();
	void printCoachInfo();
	void printSpecificPlayer(int i);



};