#pragma once
#include "Coach.h"

Coach::Coach() : Person()
{
	this->m_Coefficient=1;
	this->m_Experience=0;
	this->m_numTeam=0;
	this->m_numAchieve=0;

}


Coach::~Coach()
{
}


double Coach::getSalary()
{
	return Person::getSalary()*(1 + this->m_Coefficient);
}



void Coach::Input()
{
	int experience,numTeam;
	Person::Input();

	cout<<"Enter the coefficient:";
	cin>> m_Coefficient;;

	cout<<"Enter years of experience: ";
	cin>>  m_Experience;

	cout<<"Enter number of teams this coach has worked for:";
	cin>> m_numTeam;


	cout<<"Enter number of achievements :";
	cin>> this->m_numAchieve;
	cin.ignore(1);
	for(int i=0;i< m_numAchieve; i++)
	{
		string temp;
		cout<<"Achievement No." << i + 1 <<" :";
		getline(cin, temp);
		this->m_Achievement.push_back(temp);
		
	}

}

void Coach::Output()
{
	cout << "------------------------------------------" << endl;
	cout << "			Information about Coach			" << endl;
	Person::Output();
	cout << "Coefficient: " << this->m_Coefficient << endl;
	cout << "Experience: " << this->m_Experience << endl;
	cout << "Info of teams that he/she has worked for : " << endl;
	cout << "Achievements :" << endl;
	for (int i = 0; i < m_numAchieve; i++)
		cout << "Achievement No. " << i + 1 << " :" << m_Achievement[i] << endl;
}