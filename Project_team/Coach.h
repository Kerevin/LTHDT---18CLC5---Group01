#pragma once
#include "Person.h"

class Coach: public Person
{
private:
	double m_Coefficient;
	int m_Experience;
	int m_numTeam;
	vector <string> m_Achievement;
	int m_numAchieve;
public:

	Coach();
	~Coach();
	void Input();//Nhap thong tin
	void Output();//Xuat thong tin
//Phan set
	double getSalary();

	
};