#include"Stadium.h"
class Finance
{
private:
	string m_Doc;//Current Documents
	string m_His;//Spending History
	string m_Sup;//Supply Sources
public:
	//Constructor:
	Finance();
	Finance(string doc);
	Finance(string doc, string his);
	Finance(string doc, string his, string sup);
	//Function:
	void input();
	void output();
	double calMoney();//Bổ sung sau sau khi nhóm trưởng duyệt
	bool checkFinance();//Bổ sung sau sau khi nhóm trưởng duyệt
};