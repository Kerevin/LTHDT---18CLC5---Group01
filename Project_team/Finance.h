#pragma once
#include "Stadium.h"
class Finance
{
private:
	double m_Budget;//Số tiền có trong tài khoản
	string m_Doc;//Current Documents
	string m_His;//Spending History
	string m_Sup;//Supply Sources
public:
	//Constructor:
	Finance();
	Finance(string doc);
	Finance(string doc, string his);
	Finance(string doc, string his, string sup);
	Finance(double bud,string doc, string his, string sup);
	//Function:
	void setBudget(double bud);
	double getBudget();
	void Input();
	void Output();
	double calMoney();//Bổ sung sau sau khi nhóm trưởng duyệt
	bool checkFinance();//Bổ sung sau sau khi nhóm trưởng duyệt
};