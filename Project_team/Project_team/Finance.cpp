#include"Finance.h"

Finance::Finance()
{
	m_Budget= 0;
}

Finance::~Finance()
{

}

Finance::Finance(double bud)
{
	m_Budget=bud;

}
//Function:

void Finance::addMoney(double money)
{
	m_Budget += money;
}

double Finance::getBudget()
{
	return this->m_Budget;
}

void Finance::Input()
{
	cout<<"Enter team's budget:";
	cin >> m_Budget;
}


void Finance::makeTransaction(string date, string purpose, double money)
{
	if (m_Budget + money > 0)
	{
		cout << "Succeed to make transaction!" << endl;
		m_Budget += money;

		m_SpedingHistory.push_back("On " + date + ": " + to_string(money) + " for " + purpose);
	}
	else
	{
		cout << "Failed to make transaction due to insufficient funds!" << endl;
	}

}

void Finance::showHistory()
{
	for (int i = 0; i < m_SpedingHistory.size(); i++)
	{
		cout << m_SpedingHistory[i] << endl;
	}
}

void Finance::Output()
{
	cout << "Team's budget:"<< this->m_Budget << endl;
	cout << fixed << setprecision(0) << endl;
	cout << "Spending history: " << endl;
	showHistory();
	cout << endl;
}