
#pragma once
#include "Person.h"
class Player : public Person {
private:
	string m_Position;
	double m_Coefficient;
	vector <string> m_PenaltyCards; //Thẻ phạt
	double m_Value; //Giá trị cầu thủ
	bool m_Substitute; //Dự bị hay không
	string m_Skill; //Kỹ năng
	int m_Experience;
	int m_Goal; //Bàn thắng
	bool m_Ban; //Cấm thi đấu hay không
public:
	Player();
	
	~Player();
	void Input();
	void Output();
	void setInfo(string, string, double, double);

	double getSalary();
	double getValue();
	string getPosition();

	bool changeCoefficient(int, double);

};

