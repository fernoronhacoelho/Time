#include <iostream>
#include "my_library.h"

using std::cout;
using std:: endl;

int main(void)
{

	Time dinnerTime;
	
	cout << "\n\n";
	
	//inidializando os membros com valores válidos
	dinnerTime.hour = 18;
	dinnerTime.minute = 30;
	dinnerTime.second = 0;
	
	cout << "O jantar será servido às ";
	printMilitary(dinnerTime);
	cout << ", hora militar, \nque é ";
	printStandard(dinnerTime);
	cout << " na hora padrão. \n";
	
	//inicializando os membros com valores inválidos
	dinnerTime.hour=29;
	dinnerTime.minute=73;
	dinnerTime.second=0;
	cout << "\nHora com valores inválidos: ";
	printMilitary(dinnerTime);
	cout << endl;
	
	cout << "\n\n";
	
	return 0;
}
