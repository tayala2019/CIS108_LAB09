//Tamishia Ayala
//This is a simple calculator program
//04/17/2019
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cmath>
#include <string>
#include "Calculator.h"
#include<conio.h>
using namespace std;

int main()
{
	Calculator* myCalc = new Calculator;//Instantiate new Calculator object
	//using lambda expression -> to get what is inside of the  functions that it calls
	myCalc->menu();

	while (myCalc->run())
	{
		myCalc->getUserInput();
		myCalc->getOutput();
	}
	getchar();
	system("Pause");
	return 0;
}
