#include "Interface.h"

Main::Main()
{
	choice = 0;
}
Main::~Main()
{

}

void Main::load()
{

}
void Main::login()
{
	cout << "---------------------------------------" << endl;
	cout << "*** Welcome to Football Team Manger ***" << endl;
	cout << "---------------------------------------" << endl;
	cout << endl;
	cout << "Now you are a manager of your own team" << endl;
	cout << "Please input your information! " << endl;
	cout << "Enter to continue..." << endl;
	getchar();
	system("CLS");
	m_Manager = new Manager();
	m_Manager->Input();

}
void Main::save()
{

}
void Main::showInfo()
{
	system("CLS");
}
void  Main::showPlayersList()
{

}
void Main::showCoachInfo()
{

}
void Main::showMenu()
{
	system("CLS");
	cout << "*** Welcome to " << m_Manager->getName() << "'s  Team ***" << endl;
	choice = 0;
	cout << "1. Show your information" << endl;
	cout << "2. Players Menu" << endl; 
	cout << "3. Team Coach Menu" << endl;
	cout << "4. Team Finance " << endl;
	cout << "5. About your team " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		showInfo();
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
	cout << "2. Recruit players" << endl;
	cout << "3. Transfer player" << endl;
	cout << "4. Back to menu..." << endl;
	cin >> ch;
	cin.ignore(1);
	switch (ch)
	{
	case 1:
		m_Manager->printPlayersList();
		break;
	case 2:
		m_Manager->Recruit();
		break;
	case 3:
		//m_Manager->Transfer();
		break;
	case 4:
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
}
void Main::FinanceMenu()
{
	system("CLS");
}
void Main::TeamMenu()
{
	system("CLS");
}

void Main::run()
{
	login();
	showMenu();
}