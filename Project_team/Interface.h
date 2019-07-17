#pragma once
#include "Manager.h"
#include <fstream>
#include <windows.h>
class Main
{
private:
	int choice;
	Manager * m_Manager = new Manager();
public:
	Main();
	~Main();

	void load();
	void login();
	void save();
	void sleep();
	
	virtual void showMenu();
	virtual void showInfo();
	virtual void showPlayersList();
	virtual void showCoachInfo();

	void FinanceMenu();
	void PlayerMenu();
	void CoachMenu();
	void TeamMenu();

	void addBudget();

	void run();
};
