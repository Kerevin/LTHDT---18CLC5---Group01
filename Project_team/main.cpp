#include "Manager.h"

void main()
{
	Team * Cac = new Team("Cac Club","001","ConCuBeNho","01/07/2019");
	
	Cac->inputPlayersList();
	
	Cac->printInfo();

	delete[] Cac;
	system("pause");

}