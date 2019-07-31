#pragma once
#include "Manager.h"
#include <windows.h>
#include "Login.h"
class Main
{
private:

	Manager * m_Manager = new Manager();
	Login *account = new Login;
public:
	Main();
	~Main();
	
	void login();
	void sleep();
	void signIn();
	void signUp();
	void save();
	void load();

	virtual void showMenu();
	
	virtual void StadiumMenu();
	virtual void FinanceMenu();
	virtual void PlayerMenu();
	virtual void CoachMenu();
	virtual void TeamMenu();

	virtual void addBudget();

	virtual void run();
};
