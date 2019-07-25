#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <conio.h>
#include <fstream>
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
	~Login()
	{
	}

	virtual	void signIn()
	{
		cout << "Account: ";
		getline(cin, Username);
		cout << "Password: ";
		Password = enterPassword();
		system("cls");
	}

	virtual void signUp()
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
			cout << "Account: " << Username << endl;
			cout << "Password: ";
		
		} while (p != 13); // Enter is pressed
		cout << P << endl;
		return (password);
	}

	virtual void save()
	{
		m_FileData.open("data", ios::app);
		m_FileData << Username << endl;
		m_FileData << Password << endl;
		m_FileData.close();
	}

	void load()
	{
		m_FileData.open("data",ios::in);
		signIn();
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
		if (check == false)
		{
			cout << "Incorrect username or password!" << endl;
			getchar();
			system("cls");
			m_FileData.close();
			load();
		}
		else
			cout << "Login sucessfully" << endl;
		m_FileData.close();
	}
};