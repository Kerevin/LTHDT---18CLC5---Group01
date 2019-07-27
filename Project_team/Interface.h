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

	
	virtual void changePlayerSalary();
	virtual void changeCoachSalary();
	virtual void StadiumMenu();
	virtual void FinanceMenu();
	virtual void PlayerMenu();
	virtual void CoachMenu();
	virtual void TeamMenu();

	virtual void addBudget();

	virtual void run();
};
