#pragma once
#include "Coach.h"

Coach::Coach(void)
{
	this->m_Coefficient=0;
	this->m_Experience=0;
	this->m_numTeam=0;
	this->m_numAchieve=0;

}

Coach::Coach(string name,string dob,string nationality,string id,double salary, double coefficient,int experience,int achieve,int m_numTeam)
	: Person(name,dob,nationality,id,salary)
{
	this->m_Coefficient=coefficient;
	this->m_Experience=experience;
	this->m_numAchieve=achieve;
	this->m_numTeam=m_numTeam;
	this->m_Achievement.resize(m_numAchieve + 1);

}

Coach::Coach(Coach &c) : Person(c)
{
	this->m_Coefficient=c.m_Coefficient;
	this->m_Experience=c.m_Experience;
	this->m_numAchieve=c.m_numAchieve;

	m_Achievement.resize(c.m_numAchieve);

	for(int i=0; i< m_numAchieve; i++)
		this->m_Achievement[i]=c.m_Achievement[i];
}

Coach& Coach::operator = (Coach &c)
{
	if(this== &c);
		return *this;
	Person::operator = (c);
	this->m_Coefficient=c.m_Coefficient;
	this->m_Experience=c.m_Experience;
	this->m_numTeam=c.m_numTeam;
	this->m_numAchieve=c.m_numAchieve;
	m_Achievement.resize(m_numAchieve);
	for(int i=0;i< m_numAchieve; i++)
		this->m_Achievement[i]=c.m_Achievement[i];
	return *this;
}

Coach::~Coach()
{
}


double Coach::getSalary()
{
	return Person::getSalary() * this->m_Coefficient;
}
void Coach::setExperience(int experience)
{
	m_Experience=experience;
}

void Coach::setCoefficient(double coefficient)
{
	m_Coefficient=coefficient;
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
	Person::Output();
	cout << "			Information about Coach			";
	cout << "Coefficient: " << this->m_Coefficient;
	cout << "Experience: " << this->m_Experience;
	cout << "Info of teams that he/she has worked for : " << endl;
	cout << "Achievements :" << endl;
	for (int i = 0; i < m_numAchieve; i++)
		cout << "Achievement No. " << i + 1 << " :" << m_Achievement[i];
}