#pragma once
#include "Manager.h"
#include <fstream>
class Main
{
private:
	int choice;
	Manager * m_Manager;
public:
	Main();
	~Main();

	void load();
	void login();
	void save();
	virtual void showMenu();
	virtual void showInfo();
	virtual void showPlayersList();
	virtual void showCoachInfo();

	void FinanceMenu();
	void PlayerMenu();
	void CoachMenu();
	void TeamMenu();

	void firePlayer();
	void fireCoach();

	void run();
};
