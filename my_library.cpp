#include <iostream>
#include "my_library.h"

using std::cout;
using std::endl;

void printMilitary(const Time &t)
{
	cout << (t.hour < 10 ? "0" : "") <<t.hour << ":"
		 << (t.minute < 10 ? "0" : "") <<t.minute;
}

void printStandard(const Time &t)
{
	cout <<((t.hour == 0 || t.hour == 12) ? 
			12: t.hour %12)
		 << ":" << (t.minute < 10 ? "0": "") << t.minute
		 << ":" << (t.minute < 10 ? "0": "") << t.second
		 << (t.hour < 12 ? "da manhã" : "da tarde");
}

