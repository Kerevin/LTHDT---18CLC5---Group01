#include "Team.h"

Team::Team() {

	m_Name = "Unknown";
	m_ID = "Unknown";
	m_EstablishedDate = "Unknown";
	this->numSponsors = 0;
	this->numPlayers = 0;
	m_Coach = new Coach();
}


Team::~Team() 
{

}

void Team::Output()
{
	printInfo();
	cout << endl;
	printAchievements();
	cout << endl;
	cout << endl;
	cout << "Current coach: " << m_Coach->getName() << endl;
}

void Team::printPlayersList()
{
	cout <<"Number of players: "<< numPlayers << endl;
	if (numPlayers > 0)
	{
		cout << "List of players in my teams: " << endl;
		for (int i = 0; i < numPlayers; i++)
		{
			cout <<i+1<<"/ " << m_Player[i]->getName() <<" ("<<m_Player[i]->getPosition()<<")";
			cout << endl;
		}
	}
	else
	{
		cout << "There is no player in your team!" << endl;
	}
}

void Team::printCoachInfo()
{
	m_Coach->Output();
}

void Team::printInfo() {
	cout << "Name of team: " << m_Name << endl;
	cout << "ID: " << m_ID << endl;
	cout << "Established Date: " << m_EstablishedDate << endl;

}
void Team::printSpecificPlayer(int i)
{
	m_Player[i - 1]->Output();
}
void Team::printAchievements() {
	if (numAchievement > 0)
	{
		cout << "Achievements we have got:" << endl;
		for (int i = 0; i < numAchievement; i++)
			cout << m_Achievements[i] << endl;
	}
}

void Team::changeCoachSalary(double s)
{
	m_Coach->setSalary(s);
}

int Team::getNumPlayers()
{
	return this->numPlayers;
}

double Team::calcTotalSalary()
{
	double total=0;
	for(int i=0; i< this->numPlayers; i++)
		total+= this->m_Player[i]->getSalary();
	total+= m_Coach->getSalary();
	return total;
}


void Team::Input()
{
	cout << "Enter team's name: ";
	getline(cin, m_Name);

	cout << "Enter ID: ";
	getline(cin, m_ID);


	cout << "Enter date of establishment: ";
	getline(cin, m_EstablishedDate);

	cout << "Enter number of sponsors: ";
	cin >> numSponsors;
	cin.ignore(1);
	for (int i = 0; i < numSponsors; i++)
	{
		Person * p = new Person;
		p->Input();
		m_Sponsors.push_back(p);
	}


}

void Team::inputPlayersList()
{
	// Tạo danh sách Players //
	cout << "Enter number of players: ";
	cin >> this->numPlayers;
	cin.ignore(1);
	for (int i = 0; i < this->numPlayers; i++)
	{
		Player * p = new Player();
		p->Input();
		m_Player.push_back(p);
	}

}

void Team::FirePlayer(string id)
{
	bool found = false;
		for (int i = 0; i < this->numPlayers; i++)
		{
			if (this->numPlayers == 0)
				break;
			else
				if (this->m_Player[i]->getID().compare(id) == 0)
				{
					this->m_Player.erase(this->m_Player.begin() + i);
					found = true;
					this->numPlayers--;
				}
		}
		if(this->numPlayers==0)
				cout << " All the player in the team has been fired." << endl;
		if (!found)
			cout << "You have entered the id that does not exist." << endl;
}

void Team::FireCoach()
{
	if (m_Coach != NULL)
		delete m_Coach;
	this->m_Coach = new Coach();
}

void Team::RecruitPlayer()
{
	int num = 0;

	do {
		cout << "Enter number of players you want to recruit: ";
		cin >> num;
		cin.ignore();
		if (num <= 0)
			cout << "Number of players you want to recruit has to be an positive integer." << endl;
	} while (num <= 0);

	for (int i = 0; i < num; i++)
	{
		Player *p = new Player;
		numPlayers++;
		p->Input();
		m_Player.push_back(p);
	}
}

void Team::RecruitCoach()
{
	if (m_Coach->getName() != "Unknown")
	{
		string answer;
		cout << "If you want to recruit new coach for your team... " << endl;
		cout << "You have to fire your current coach!" << endl;
		cout << "(Y/N)? ";
		cin.ignore(1);
		getline(cin, answer);
		if (answer == "Y" || answer == "y")
		{
			FireCoach();
		}
	}
	m_Coach->Input();

}

void Team::transferPlayer(int i)
{
	if (numPlayers == 1)
	{
		m_Player.pop_back();
		numPlayers = 0;
	}
	else
	{
		m_Player.erase(m_Player.begin() + i - 1);
		numPlayers--;
	}

}
double Team::getSpecificPlayerValue(int i)
{
	return m_Player[i - 1]->getValue();
}

void Team::setPlayerSalary(int ch, double s)
{
	m_Player[ch - 1]->setSalary(s);
}