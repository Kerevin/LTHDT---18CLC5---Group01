#include"Finance.h"
//Constructor:
Finance::Finance()
{
	m_Budget=0;
	m_Doc = "";
	m_His = "";
	m_Sup = "";
}

Finance::Finance(string doc)
{
	m_Budget=0;
	m_Doc = doc;
}

Finance::Finance(string doc, string his)
{
	m_Budget=0;
	m_Doc = doc;
	m_His = his;
}

Finance::Finance(string doc, string his, string sup)
{
	m_Budget=0;
	m_Doc = doc;
	m_His = his;
	m_Sup = sup;
}

Finance::Finance(double bud, string doc, string his, string sup)
{
	m_Budget=bud;
	m_Doc = doc;
	m_His = his;
	m_Sup = sup;
}
//Function:

void Finance::setBudget(double bud)
{
	m_Budget=bud;
}

double Finance::getBudget()
{
	return this->m_Budget;
}
void Finance::Input()
{
	double bud;
	cout<<"Enter team's budget:";
	cin>>bud;
	this->setBudget(bud);
	cout << "Enter Team's Documents: ";
	getline(cin, m_Doc);
	cout << "Enter Team's Spending Histories: ";
	getline(cin, m_His);
	cout << "Enter Team's Support Sources: ";
	getline(cin, m_Sup);
}

void Finance::Output()
{
	cout << "Team's budget:"<< this->m_Budget << endl;
	cout << "Team's Documents: " << m_Doc << endl;
	cout << "Team's Spending Histories: " << m_His << endl;
	cout << "Team's Support Sources: " << m_Sup << endl;
}