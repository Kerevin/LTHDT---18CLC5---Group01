#include "Interface.h"

void main()
{
	
	Main *mainProgram = new Main();
	mainProgram->run();
	
	cout << endl;
	delete mainProgram;
	system("pause");

}