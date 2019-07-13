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
	Finance *m_Finance;
	vector<string> m_Achievements;
	int numAchievement;
public:
	Team();
	Team(string n, string i, string b);
	~Team();


	 // --------------------- //
    //    About finance      //
   //   ------------------  //
	double calcTotalSalary();
	double getFinanceBudget();
	void setFinanceBudget(double bud);
	Finance& getFinance();


	// --------------------- //
   //    About stadium      //
  //   ------------------  //
	void setStadium(Stadium *);
	void setStadium();


	// --------------------- //
   //    About Employee     //
  //   ------------------  //
	int getNumPlayers();
	void FirePlayer(string id);
	void FireCoach();	//Team only have 1 coach so we don't have to compare the id 
	void RecruitPlayer();
	void RecruitCoach();
	void addPerson();


	// --------------------- //
   //    About I-O          //
  //   ------------------  //
	void Input();
	void Output();
	void printInfo();
	void printAchievements();
	void printPlayersList();
	void inputPlayersList();


	void Dissolution();

};