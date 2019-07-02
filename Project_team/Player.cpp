#include "Player.h"
#include "Team.h"
Player::Player() {
	m_Position = "Unknown";
	m_Coefficient = 0;
	m_PenaltyCards.resize(5);
	m_Value = 0;
	m_Substitute = false;
	m_Skill = "Unknown";
	m_Experience = 0;
	m_Goal = 0;
	m_Ban = false;
}
Player::Player(string hoten, string ngaysinh, string noisinh, string quoctich, double luong,string id, string tongiao, string l, double s, vector<string> b, double v, bool su, string sk, int e, int g, bool ba) 
	: Person(hoten, ngaysinh, noisinh, quoctich, luong)
{
	m_Position = l;
	m_Coefficient = s;
	m_PenaltyCards = b;
	m_Value = v;
	m_Substitute = su;
	m_Skill = sk;
	m_Experience = e;
	m_Goal = g;
	m_Ban = ba;
}

void Player::Input(){

	string x, y,pos,skills;
	Person::Input();
	double sal,val;
	int goals,exp;
	cout<< "Position in team: ";
	getline(cin, pos);
	this->m_Position=pos;

	cout<< "Value :";
	cin>> val;
	m_Value=val;
	cin.ignore();
	cout<< "Substitute(y/n): ";
	getline(cin, x);
	if (x == "y")
		m_Substitute = true;
	else
		m_Substitute = false;

	cout << "Ban(y/n): ";
	getline(cin, y);

	//Xet xem cau thu co bi ban khong
	if (y == "y" || y == "Y")
		m_Ban = true;
	else
		m_Ban = false;

	cout<<"Skills: ";
	getline(cin, skills);
	this->m_Skill=skills;

	cout<<"Experiences: ";
	cin>>exp;
	this->m_Experience=exp;
	cin.ignore();
	cout<<"Number of goals: ";
	cin>>goals;
	cin.ignore();
}
void Player::Output() {

	
	cout<<"Location: "<<m_Position<<endl;
	cout<<"Salary: "<<m_Coefficient<<endl;
	cout<<"Penalty cards: ";
	for (int i = 0; i < m_PenaltyCards.size(); i++)
		cout<<m_PenaltyCards[i];
	cout<<"Value: "<<m_Value<<endl;
	cout<<"Substitute: ";
	if (m_Substitute == true)
		cout<<"Substitute player"<<endl;
	else
		cout<<"Offical player"<<endl; 
	cout<<"Ban: ";
	if (m_Ban == true)
		cout<<"Banned player"<<endl;
	else
		cout<<"Player is not banned."<<endl;
	cout<<"Skills: "<<m_Skill<< endl;
	cout<<"Experience: "<<m_Experience<<endl;
	cout<<"Goals: "<<m_Goal<<endl;
}
void Player::setInfo(string l, string sk, double s, double v) {
	m_Position = l;
	m_Coefficient = s;
	m_Value = v;
	m_Skill = sk;
}
double Player::getSalary()
{
	return Person::getSalary() * this->m_Coefficient;
}
double Player::getValue() {
	return m_Value;
}
string Player::getPosition() {
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
