#include"Finance.h"
//Constructor:
Finance::Finance()
{
	m_Doc = "";
	m_His = "";
	m_Sup = "";
}

Finance::Finance(string doc)
{
	m_Doc = doc;
}

Finance::Finance(string doc, string his)
{
	m_Doc = doc;
	m_His = his;
}

Finance::Finance(string doc, string his, string sup)
{
	m_Doc = doc;
	m_His = his;
	m_Sup = sup;
}
//Function:
void Finance::input()
{
	cout << "Enter Team's Documents: ";
	getline(cin, m_Doc);
	cout << "Enter Team's Spending Histories: ";
	getline(cin, m_His);
	cout << "Enter Team's Support Sources: ";
	getline(cin, m_Sup);
}

void Finance::output()
{
	cout << "Team's Documents: " << m_Doc << endl;
	cout << "Team's Spending Histories: " << m_His << endl;
	cout << "Team's Support Sources: " << m_Sup << endl;
}
