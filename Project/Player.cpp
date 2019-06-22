#include "Player.h"

Player::Player() {
	m_Team = NULL;
	m_Position = "Unknown";
	m_Salary = 0;
	m_PenaltyCards.resize(5);
	m_Value = 0;
	m_Substitute = false;
	m_Skill = "Unknown";
	m_Experience = "Unknown";
	m_Goal = 0;
	m_Ban = false;
}
Player::Player(string hoten, string ngaysinh, string noisinh, string quoctich, string id, string tongiao, double luong, Team *t, string l, double s, vector<string> b, double v, bool su, string sk, string e, int g, bool ba) 
	: Person(hoten, ngaysinh, noisinh, quoctich, luong)
{
	m_Team = t;
	m_Position = l;
	m_Salary = s;
	m_PenaltyCards = b;
	m_Value = v;
	m_Substitute = su;
	m_Skill = sk;
	m_Experience = e;
	m_Goal = g;
	m_Ban = ba;
}

void Player::input(){

	//Thiếu input Team, Khoa bếu lo nhé. Yêu <3
	string x, y;
	cout << "Position in team: ";
	cin.ignore();
	getline(cin, m_Position);

	cout << "Salary: ";
	cin >> m_Salary;
	
	cout << "Value :";
	cin >> m_Value;

	cout << "Substitute(y/n): ";
	cin.ignore();
	getline(cin, x);
	if (x == "y")
		m_Substitute = true;
	else
		m_Substitute = false;
	cout << "Ban(y/n): ";
	cin.ignore();
	getline(cin, y);

	if (y == "y")
		m_Ban = true;
	else
		m_Ban = false;
	cout << "Skills: ";
	cin.ignore();
	getline(cin, m_Skill);

	cout << "Experiences: ";
	cin.ignore();
	getline(cin, m_Experience);

	cout << "Number of goals: ";
	cin >> m_Goal;
}
void Player::output() {

	//Vẫn là thiếu output Team, Khoa bếu yêu dấu lo nhé <3

	cout << "Location: " << m_Position << endl;
	cout << "Salary: " << m_Salary << endl;
	cout << "Booking: ";
	for (int i = 0; i < m_PenaltyCards.size; i++)
		cout << m_PenaltyCards[i];
	cout << "Value: " << m_Value << endl;
	cout << "Substitute: ";
	if (m_Substitute == true)
		cout << " Substitute player";
	else
		cout << "Offical player"; 
	cout << "Ban: ";
	if (m_Ban == true)
		cout << "Ban player";
	else
		cout << "No";
	cout << "Skill: " << m_Skill << endl;
	cout << "Experience: " << m_Experience << endl;
	cout << "Goal: " << m_Goal << endl;
}
void Player::setInfo(string l, Team *t, string sk, double s, double v) {
	m_Team = t;
	m_Position = l;
	m_Salary = s;
	m_Value = v;
	m_Skill = sk;
}
double Player::getValue() {
	return m_Value;
}
string Player::getLocation() {
	return m_Position;
}
Team Player::getTeam() {
	return *m_Team;
}
bool Player::changeSalary(int x, double money) {
	if (x == 1)
	{
		m_Salary += money;
		true;
	}
	if (x == 2)
	{
		if (m_Salary < money)
			return false;
		m_Salary -= money;
		return true;
	}
}
void Player::changeSubstitute() {
	if (m_Substitute == true)
		m_Substitute = false;
	else
		m_Substitute = true;
}
void Player::addGoal(int goal) {
	m_Goal += goal;
}
int Player::getGoal() {
	return m_Goal;
}
void Player::transfer(string ID) {
	if (ID == Person::getID()) {
		m_Team = NULL;
		m_Position = "Unknown";
		m_Salary = 0;
		m_PenaltyCards.resize(20);
		m_Value = 0;
		m_Substitute = false;
		m_Skill = "Unknown";
		m_Experience = "Unknown";
		m_Goal = 0;
		m_Ban = false;
	}
}