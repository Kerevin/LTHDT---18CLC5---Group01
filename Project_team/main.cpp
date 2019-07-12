#include "Manager.h"

void main()
{
	
	Team * Restudy = new Team("Restudy","001","ConCuBeNho","01/07/2019");
	Manager * manager1 = new Manager();

	manager1->Input();


	manager1->setTeam(Restudy);

	Restudy->Output();
	cout << endl;
	Restudy->addPerson();
	manager1->Recruit();
	manager1->Fire();
	manager1->Output();

	Restudy->Output();


	// Khoa code đỉnh Vô Cùng Luôn //
	delete Restudy;
	delete manager1;
	cout << endl;
	system("pause");

}