
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
	Player(string, string, string, double, string, string, double , vector<string>, double, bool, string, int, int);
	~Player();
	void Input();
	void Output();
	void setInfo(string, string, double, double);//Gán vị trí, đội tuyển, kỹ năng, mức lương, giá trị cầu thủ
	double getSalary();
	double getValue();//Lấy giá trị cầu thủ
	string getPosition();//Lấy vị trí cầu thủ
	bool changeCoefficient(int, double);//Tăng giảm lương
	void changeSubstitute();//Chuyển sang dự bị hoặc cho ra sân
	void addGoal(int);//Thêm số bàn thắng
	int getGoal();//Lấy số bàn thắng
	void transfer(string ID);//Hàm chuyển nhượng(xoá cầu thủ)
};

