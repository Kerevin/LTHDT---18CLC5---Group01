#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Finance
{
private:
	double m_Budget;//Số tiền có trong tài khoản
	vector <string> m_SpedingHistory;//Spending History
	
public:

	Finance();
	Finance(double bud);
	~Finance();
	//Function:
	void addMoney(double );
	double getBudget();
	void Input();
	void Output();
	void makeTransaction(string, string, double );
	void showHistory();
	
	
};