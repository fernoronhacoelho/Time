#include <stdio.h>

struct Time{
	int hour;
	int minute;
	int second;
};

void printMilitary(const Time &t);
void printStandard(const Time &t);
