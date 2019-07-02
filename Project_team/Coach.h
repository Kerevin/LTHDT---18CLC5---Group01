#pragma once
#include "Person.h"


class Coach: public Person
{
private:
	double m_Coefficient;//He so muc luong
	int m_Experience;//so nam kinh nghiem
	int m_numTeam;//so m_Coefficient m_Team bong da lam viec
	vector <string> m_Achievement;//cac thanh tich dat dc
	int m_numAchieve;
public:
//Phan constructor va destructor
	Coach();
	Coach(string name,string dob,string nationality,string id,double salary,double coefficient,int experience,int achieve,int m_numTeam);
	Coach(Coach &);
	Coach& operator = (Coach &);
	~Coach();
	void Input();//Nhap thong tin
	void Output();//Xuat thong tin
//Phan set
	double getSalary();
	void setExperience(int experience);//Gan Kinh nghiem
	void setCoefficient(double coefficient);//Gan muc m_Coefficient
	void setNumTeam(int m_numTeam);
	
};