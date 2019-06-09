#include <string>
#include <iostream>

using namespace std;

class Person
{
private:
	string m_Name;
	string m_DoB;
	string m_Nationality;
	string m_ID;
	double m_Salary;
	// Team * m_Team;
	// Thieu class Team tu tu them vao :D //
public:
	Person();
	Person(string, string, string, string, double);
	Person(string, string, string);
	Person(string, string);
	Person(string);
	Person(const Person &);
	~Person();

	void input();
	void output();

	void setName(string);
	void setDoB(string);
	void setNationality(string);
	void setID(string);
	void setSalary(double);
	// void setTeam();

	string getName();
	string getDoB();
	string getNationality();
	string getID();
	double getSalary();
	// Team& getTeam();

	double calcSalary();

};