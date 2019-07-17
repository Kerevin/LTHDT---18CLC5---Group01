#include "Player.h"
#include "Team.h"
Player::Player() 
{
	m_Position = "Unknown";
	m_Value = 0;
	m_Substitute = false;
	m_Skill = "Unknown";
	m_Experience = 0;
	m_Goal = 0;
	m_Ban = false;
}
Player::~Player()
{

}
Player::Player(string hoten, string ngaysinh, string quoctich, double luong, string id,  string l, double s, vector<string> b, double v, bool su, string sk, int e, int g) 
	: Person(hoten, ngaysinh, quoctich, id, luong)
{
	m_Position = l;
	m_Coefficient = s;
	m_PenaltyCards = b;
	m_Value = v;
	m_Substitute = su;
	m_Skill = sk;
	m_Experience = e;
	m_Goal = g;
}

void Player::Input(){

	Person::Input();

	cout<< "Position in team: ";
	getline(cin, m_Position);
	cout<< "Value :";
	cin>> m_Value;
	cin.ignore(1);

	string choice;

	cout<< "Substitute(y/n): ";
	getline(cin, choice);

	if (choice == "y" || choice == "Y")
		m_Substitute = true;
	else
		m_Substitute = false;

	cout << "Banned? (y/n): ";
	getline(cin, choice);
	if (choice == "y" || choice == "Y")
		m_Substitute = true;
	else
		m_Substitute = false;

	cout<<"Skills: ";
	getline(cin, m_Skill);


	cout<<"Years of experience: ";
	cin>> m_Experience;

	cout<<"Number of goals: ";
	cin >> m_Goal;
	cin.ignore(1);
}
void Player::Output() {

	Person::Output();

	cout << "Position: " << m_Position << endl;
	cout << "Salary: " << Person::getSalary() << endl;

	if (m_PenaltyCards.size() > 0)
	{
		cout << "Penalty cards: ";
		for (int i = 0; i < m_PenaltyCards.size(); i++)
			cout << m_PenaltyCards[i] << endl;
	}

	cout<<"Transferable value : "<<m_Value<<endl;

	cout<<"Substitute: ";
	if (m_Substitute == true)
		cout<<"Substitute player"<<endl;
	else
		cout<<"Offical player"<<endl; 

	if (m_Ban == true)
		cout<<"Banned player..."<<endl;
	else
		cout<<"Player has not been banned."<<endl;

	cout<<"Skills: "<<m_Skill<< endl;
	cout<<"Experience: "<<m_Experience<<endl;
	cout<<"Number of goals: "<<m_Goal<<endl;
}
void Player::setInfo(string l, string sk, double s, double v) {
	m_Position = l;
	m_Coefficient = s;
	m_Value = v;
	m_Skill = sk;
}
double Player::getSalary()
{
	return Person::getSalary();
}
double Player::getValue() 
{
	return m_Value;
}

string Player::getPosition()
{
	return m_Position;
}

bool Player::changeCoefficient(int x, double money) {
	if (x == 1)
	{
		m_Coefficient += money;
		true;
	}
	if (x == 2)
	{
		if (m_Coefficient < money)
			return false;
		m_Coefficient -= money;
		return true;
	}

	return true;
}
void Player::changeSubstitute() {
	if (m_Substitute == true)
		m_Substitute = false;
	else
		m_Substitute = true;
}
void Player::addGoal(int goal)
 {
	m_Goal += goal;
}
int Player::getGoal() {
	return m_Goal;
}
