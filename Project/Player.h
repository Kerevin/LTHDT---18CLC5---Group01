#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
#include "Team.h"
using namespace std;

class Player : public Person {
private:
	Team *m_Team;
	string m_Position;
	double m_Salary;
	vector<string> m_PenaltyCards; //Thẻ phạt
	double m_Value; //Giá trị cầu thủ
	bool m_Substitute; //Dự bị hay không
	string m_Skill; //Kỹ năng
	string m_Experience;
	int m_Goal; //Bàn thắng
	bool m_Ban; //Cấm thi đấu hay không
public:
	Player();
	Player(string, string, string, string, string, string, double,Team*, string, double, vector<string>, double, bool, string, string, int, bool);

	void input();
	void output();
	void setInfo(string, Team*, string, double, double);//Gán vị trí, đội tuyển, kỹ năng, mức lương, giá trị cầu thủ
	double getValue();//Lấy giá trị cầu thủ
	string getLocation();//Lấy vị trí cầu thủ
	Team getTeam();//Lấy đội tuyển cầu thủ
	bool changeSalary(int, double);//Tăng giảm lương
	void changeSubstitute();//Chuyển sang dự bị hoặc cho ra sân
	void addGoal(int);//Thêm số bàn thắng
	int getGoal();//Lấy số bàn thắng
	void transfer(string ID);//Hàm chuyển nhượng(xoá cầu thủ)
};
