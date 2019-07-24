#include "Interface.h"

Main::Main()
{
	
}
Main::~Main()
{

}

void Main::load()
{
	
}
void Main::login()
{
	int ch = 0;
	cout << "---------------------------------------" << endl;
	cout << "*** Welcome to Football Team Manger ***" << endl;
	cout << "---------------------------------------" << endl;
	cout << endl;
	cout << "Now you are a manager of your own team" << endl;
	cout << "1: continue      2: create new account " << endl;
	cout << ">> ";
	cin >> ch;
	cin.ignore(1);
	if (ch == 2)
	{
		cout << "Creating new account...";
		Sleep(10);
		system("CLS");
		cout << "Please input your information! " << endl;
		m_Manager->Input();
	}
	

}
void Main::save()
{

}
void Main::sleep()
{
	Sleep(20);
	cout << "Press any key to coninue..." << endl;
	getchar();
}
void Main::showInfo()
{
	system("CLS");
	m_Manager->printInfo();
}
void  Main::showPlayersList()
{
	m_Manager->printPlayersList();
}
void Main::showCoachInfo()
{
	system("CLS");
	m_Manager->printCoachInfo();
}
void Main::showMenu()
{
	system("CLS");
	cout << "*** Welcome to " << m_Manager->getName() << "'s  Team ***" << endl;
	int choice = 0;
	cout << "1. Show your information" << endl;
	cout << "2. Players Menu" << endl; 
	cout << "3. Team Coach Menu" << endl;
	cout << "4. Team Finance " << endl;
	cout << "5. About your team " << endl;
	cout << "6. About team's training stadium" << endl;
	cout << "6. Pay monthly salary to employees " << endl;
	cout << "7. Edit your information" << endl;
	cout << ">> ";
	cin >> choice;
	cin.ignore(1);
	switch (choice)
	{
	case 1:
		showInfo();
		sleep();
		showMenu();
		break;
	case 2:
		PlayerMenu();
		break;
	case 3:
		CoachMenu();
		break;
	case 4:
		FinanceMenu();
		break;
	case 5:
		TeamMenu();
		break;
	case 6:
		StadiumMenu();
		break;
	case 7:
		m_Manager->paySalary(); 
		sleep();
		showMenu();
		break;

	case 8:
		system("CLS");
		m_Manager->Input();
		sleep();
		showMenu();
		break;
	default:
		showMenu();
		break;
	}
}
void Main::PlayerMenu()
{
	system("CLS");
	int ch = 0;
	cout << "1. Show all players' information" << endl;
	cout << "2. Show detailed information of specific player" << endl;
	cout << "3. Recruit players" << endl;
	cout << "4. Transfer player" << endl;
	cout << "5. Back to menu..." << endl;
	cout << ">> ";
	cin >> ch;
	cin.ignore(1);
	switch (ch)
	{
	case 1:
		system("CLS");
		m_Manager->printPlayersList();
		sleep();
		PlayerMenu();
		break;
	case 2:
		system("CLS");
		m_Manager->printPlayersList();
		m_Manager->printSpecificPlayer();
		sleep();
		PlayerMenu();
		break;
	case 3:
		system("CLS");
		m_Manager->recruit(1);
		sleep();
		PlayerMenu();
		break;
	case 4:
		system("CLS");
		m_Manager->transferPlayer();
		sleep();
		PlayerMenu();
		break;
	case 5:
		showMenu();
		break;
	default:
		PlayerMenu();
		break;
	}
}
void Main::CoachMenu()
{
	system("CLS");
	int ch = 0;
	cout << "1. Show coach' information" << endl;
	cout << "2. Recruit new coach" << endl;
	cout << "3. Fire current coach" << endl;
	cout << "4. Back to menu..." << endl;
	cout << ">> ";
	cin >> ch;
	cin.ignore(1);
	switch (ch)
	{
	case 1:
		system("CLS");
		m_Manager->printCoachInfo();
		sleep();
		CoachMenu();
		break;
	case 2:
		system("CLS");
		m_Manager->recruit(2);
		sleep();
		CoachMenu();
		break;
	case 3:
		system("CLS");
		m_Manager->fire(2);
		sleep();
		CoachMenu();
		break;
	case 4:
		showMenu();
		break;
	default:
		CoachMenu();
		break;
	}
}
void Main::StadiumMenu()
{
	system("CLS");
	int ch = 0;
	cout << "1. Show stadium's information" << endl;
	cout << "2. Edit stadium's information" << endl;
	cout << "3. Back to menu..." << endl;
	cout << ">> ";
	cin >> ch;
	cin.ignore(1);
	switch (ch)
	{
	case 1:
		m_Manager->printStadium();
		sleep();
		StadiumMenu();
		break;
	case 2:
		m_Manager->inputStadium();
		sleep();
		StadiumMenu();
		break;
	case 3:
		showMenu();
		break;
	default:
		StadiumMenu();
		break;
	}
}
void Main::addBudget()
{
	double bud;
	cout << "Input amount of budget: ";
	cin >> bud;
	cin.ignore(1);
	m_Manager->setFinanceBudget(bud);
}
void Main::FinanceMenu()
{
	system("CLS");
	int ch = 0;
	cout << "*** Finance Information ***" << endl;
	cout << "1. Show current budget " << endl;
	cout << "2. Add budget" << endl;
	cout << "3. Back to menu..." << endl;
	cout << ">> ";
	cin >> ch;
	cin.ignore(1);
	switch (ch)
	{
	case 1:
		system("CLS");
		m_Manager->printFinaceInfo();
		sleep();
		FinanceMenu();
		break;
	case 2:
		system("CLS");
		addBudget();
		sleep();
		FinanceMenu();
		break;
	case 3:
		showMenu();
		break;
	default:
		FinanceMenu();
		break;
	}

}

void Main::TeamMenu()
{
	system("CLS");
	int ch = 0;
	cout << "*** Team Information ***" << endl;
	cout << "1. Show information about your current team " << endl;
	cout << "2. Create new team" << endl;
	cout << "3. Back to menu..." << endl;
	cout << ">> ";
	cin >> ch;
	cin.ignore(1);
	switch (ch)
	{
	case 1:
		system("CLS");
		m_Manager->outputTeam();
		sleep();
		TeamMenu();
		break;
	case 2:
		system("CLS");
		m_Manager->inputTeam();
		sleep();
		TeamMenu();
		break;
	case 3:
		showMenu();
		break;
	default:
		TeamMenu();
		break;
	}
}

void Main::run()
{
	login();
	showMenu();
}