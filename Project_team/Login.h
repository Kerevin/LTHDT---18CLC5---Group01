#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <conio.h>
#include <fstream>
#include <iomanip>
using namespace std;
class Login
{
private:
	string Username, Password;
	fstream m_FileData;
public:
	Login()
	{

	}
	virtual ~Login()
	{
		if (m_FileData)
			m_FileData.close();
	}


	string getUserName()
	{
		return Username;
	}
	virtual	void login()
	{
		cout << "Account: ";
		getline(cin, Username);
		cout << "Password: ";
		Password = enterPassword();
		system("cls");
	}
	virtual void signUp()
	{
		login();
		saveAccount();
	}
	virtual bool signIn()
	{
		m_FileData.open("data", ios::in);
		login();
		string name, pw;
		bool check = false;
		while (m_FileData)
		{
			getline(m_FileData, name);
			getline(m_FileData, pw);
			if (Username == name && Password == pw)
			{
				check = true;
				break;
			}
		}
		m_FileData.close();
		return (check);
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
			cout << "Account: " << Username << endl;
			cout << "Password: ";

		} while (p != 13); // Enter is pressed
		cout << P << endl;
		return (password);
	}

	virtual void saveAccount()
	{
		m_FileData.open("data", ios::app);
		m_FileData << Username << endl;
		m_FileData << Password << endl;
		m_FileData.close();
	}
	virtual string * loadData()
	{
		string name;
		string *list = new string[7];
		m_FileData.open("information", ios::in);
		while (m_FileData)
			{
				getline(m_FileData, name);
				if (Username == name)
				{
					for (int i = 0 ; i < 7; i++)
						getline(m_FileData, list[i]);
					break;
				}
			}
		m_FileData.close();
		return list;
	}
	template <class T> void operator << (const T &s)
	{
		m_FileData << fixed << setprecision(0) << endl;
		this->m_FileData.open("information", ios::app);
		this->m_FileData << s << endl;
		this->m_FileData.close();
		return;
	}

};