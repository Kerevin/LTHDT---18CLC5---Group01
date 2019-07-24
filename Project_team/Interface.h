#pragma once
#include "Manager.h"
#include <windows.h>
#include "Login.h"
class Main
{
private:

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

	void StadiumMenu();
	void FinanceMenu();
	void PlayerMenu();
	void CoachMenu();
	void TeamMenu();

	void addBudget();

	void run();
};
