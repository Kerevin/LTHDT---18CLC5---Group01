#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;
class Login
{
private:
	string m_Password, m_Account;
	fstream m_FileData;
public:
	Login()
	{
		m_Password = "";
		m_Account = "";
	}
	~Login()
	{
	}

	void signIn()
	{
		cout << "Account: ";
		getline(cin, m_Account);
		cout << "Password: ";
		m_Password = enterPassword();
	}

	void signUp()
	{
		signIn();
		save();
	}

	string enterPassword()
	{
		string password, P;
		char p;
		p = _getch();
		do
		{
			if (p == 8 && P.size() > 0) // Delete 
			{
				P.resize(P.length() - 1);
				cout << P;
				password.resize(password.length() - 1);
			}
			else {
				P = P + "*";
				cout << P;
				password.push_back(p);
			}
			p = _getch();
			system("cls");
			cout << "Account: " << m_Account << endl;
			cout << "Password: ";
		
		} while (p != 13); // Enter is pressed
		cout << P << endl;
		return password;
	}

	void save()
	{
		m_FileData.open("data", ios::app);
		m_FileData << m_Account << endl;
		m_FileData << m_Password << endl;
		m_FileData.close();
	}

	void load()
	{
		m_FileData.open("data",ios::in);

		getline(m_FileData, m_Account);
		getline(m_FileData, m_Password);

		m_FileData.close();
	}

	bool check()
	{

	}
};