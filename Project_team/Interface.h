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
	void showMenu();
	void showInfo();
	void showPlayersList();
	void showCoachInfo();

	void FinanceMenu();
	void PlayerMenu();
	void CoachMenu();
	void TeamMenu();

	void recruitPlayer();
	void recruitCoach();
	void firePlayer();
	void fireCoach();

	void run();
};
