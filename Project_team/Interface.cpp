#include "Interface.h"

Main::Main()
{
	
}

Main::~Main()
{
	
}

void Main::signIn()
{
CHOICE:
	system("CLS");
	if (account->signIn() == false)
	{
		cout << "Incorrect username or password!" << endl;
		cout << "Try again? (Y/N)" << endl;
		cout << ">> ";
		char ch;
		cin >> ch;
		cin.ignore();
		if (ch == 'Y' || ch == 'y')
			goto CHOICE;
		else
		{
			login();
		}
	}
	else
	{
		cout << "Login successfully!" << endl;
		sleep();
	}
}

void Main::signUp()
{
	cout << "Creating new account..." << endl;
	system("CLS");
	account->signUp();
	cout << "Signed up sucessfully" << endl;
	cout << "Please input your information! " << endl;
	m_Manager->Input();
}

void Main::login()
{
	system("CLS");
	int ch = 0;
	cout << "---------------------------------------" << endl;
	cout << "*** Welcome to Football Team Manger ***" << endl;
	cout << "---------------------------------------" << endl;
	cout << endl;
	cout << "Now you are a manager of your own team" << endl;
	cout << "1: Sign in      2: Create new account " << endl;
	cout << ">> ";
	cin >> ch;
	cin.ignore(1);
	if (ch == 1)
	{
		signIn();
		load();
	}
	else if (ch == 2)
	{
		signUp();
		save();
	}
	else
	{
		login();
	}

}

void Main::save()
{
	cout << fixed << setprecision(0) << endl;
	(*account) << account->getUserName();
	(*account) << m_Manager->getName();
	(*account) << m_Manager->getID();
	(*account) << m_Manager->getDOB();
	(*account) << m_Manager->getNationality();
	(*account) << m_Manager->getSalary();
	(*account) << m_Manager->getExperience();
	(*account) << m_Manager->getCoefficient();
}

void Main::load()
{
	// Manual work //
	// Need some exceptional methods to handle this //

	string * list = account->loadData();
	m_Manager->setName(list[0]);
	m_Manager->setID(list[1]);
	m_Manager->setDOB(list[2]);
	m_Manager->setNationality(list[3]);
	m_Manager->setSalary(stod(list[4]));
	m_Manager->setExperience(stoi(list[5]));
	m_Manager->setCoefficient(stod(list[6]));
	delete[] list;
}

void Main::sleep()
{
	Sleep(20);
	cout << "Press any key to coninue..." << endl;
	getchar();
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
	cout << "7. Pay monthly salary to employees " << endl;
	cout << "8. Edit your information" << endl;
	cout << "9. Back to login console" << endl;
	cout << ">> ";
	cin >> choice;
	cin.ignore(1);
	switch (choice)
	{
	case 1:
		system("CLS");
		m_Manager->printInfo();
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
	case 9:
		login();
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
	cout << "5. Modify salary of specific player" << endl;
	cout << "6. Back to menu..." << endl;
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
		system("CLS");
		m_Manager->changePlayerSalary();
		sleep();
		PlayerMenu();
		break;
	case 6:
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
	cout << "4. Modify coach's salary " << endl;
	cout << "5. Back to menu..." << endl;
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
		m_Manager->fireCoach();
		sleep();
		CoachMenu();
		break;
	case 4:
		system("CLS");
		m_Manager->changeCoachSalary();
		sleep();
		CoachMenu();
		break;
	case 5:
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

