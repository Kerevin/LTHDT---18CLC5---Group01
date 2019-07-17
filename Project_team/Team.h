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
	Stadium * m_Stadium;

	vector <Person *> m_Sponsors;	//Lam on k sa thai sponsors :))
	int numSponsors; 
	vector <Player *> m_Player;
	int numPlayers;
	Coach * m_Coach;
	vector<string> m_Achievements;
	int numAchievement;
public:
	Team();
	Team(string n, string i, string b);
	virtual ~Team();


	 // --------------------- //
    //    About salary       //
   //   ------------------  //
	virtual double calcTotalSalary();

	// --------------------- //
   //    About stadium      //
  //   ------------------  //
	virtual void setStadium(Stadium *);
	virtual void setStadium();


	// --------------------- //
   //    About Employee     //
  //   ------------------  //
	virtual int getNumPlayers();
	virtual void FirePlayer(string id);
	virtual void FireCoach();	//Team only have 1 coach so we don't have to compare the id 
	virtual void RecruitPlayer();
	virtual void RecruitCoach();
	virtual void addPerson();


	// --------------------- //
   //    About I-O          //
  //   ------------------  //
	void Input();
	void Output();
	void printInfo();
	void printAchievements();
	void printPlayersList();
	void inputPlayersList();
	void printCoachInfo();

	void Dissolution();

};