//Tamishia Ayala
//This is a simple calculator program
//04/17/2019
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cmath>
#include <string>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "Calculator.h"
#define PI 3.14159265
using namespace std;



Calculator::Calculator()//intialize cal staus
{
	choice = true;
}


Calculator::~Calculator()
{
}

void Calculator::menu()//Display menu
{
	cout << "Welcome to the calculator program \n";
	cout << "Valid operator's are:\n\n1: X - Exit proram\n2: C - Clear calculator\n3: + Addition";
	cout << "\n4: - Subtraction\n5: * Multiplication\n6: / Division\n7: Q - Square Root ";
	cout << "\n8: L - Logarithm\n9: I Invert sign\n10: ^ Raise to a power\n11: N - Sine Function\n12: O - Cosine Function\n13: T - Tangent Function\n\n";
	
}

void Calculator::getUserInput()
{
	
		cout << "Begin calculation: ";
		cin >> num1;
		op = getchar();
		Calculator m;
		if (op == 'Q' || op == 'L' || op == '^' || op == 'N' || op == 'O' || op == 'T')
		{
			
			m.menu();
			cout << "\n";
		}
		else
		{
			
			cin >> num2;
			
		}
		
		
			
		

		
	
	
	
	
	
}

void Calculator::getOutput()
{
	if (choice)
	{
		switch (op)
		{
		case'+':
		{
			cout << "Answer is: " << (num1 + num2) << "\n" << endl;
			break;
		}
		case'-':
		{
			cout << "Answer is: " << (num1 - num2) << "\n" << endl;
			break;
		}
		case'*':
		{
			cout << "Answer is: " << (num1 * num2) << "\n" << endl;
			break;
		}
		case'/':
		{
			if (num2 == 0)
			{
				"Divide by zero is not allowed";
			}
			else
			{
				cout << "Answer is: "<<(num1 / num2) << "\n"<< endl;
				break;
			}
		}
		case'^':
		{
			cout << "Answer is: " << exp2(num1) <<"\n" << endl;
			break;
		}
		case'C':
		{
			result = 0.0;
			cout << "Values Cleared!!: " << "\n" << result;
			Sleep(2000);
			break;
		}
		case'I':
		{
			cout << "Answer is: " << -(num1) << "\n" << endl;
			break;
		}
		case'Q':
		{
			cout << "Answer is: " << sqrt(num1) << "\n" << endl;
			break;
		}
		case'L':
		{
			cout << "Answer is: " << log(num1) << "\n" << endl;
			break;
		}
		case'N':
		{
			cout << "Answer is: " << sin(num1 * PI / 180) << "\n" << endl;
			break;
		}
		case'O':
		{
			cout << "Answer is: " << cos(num1 * PI / 180) << "\n" << endl;
			break;
		}
		case'T':
		{
			cout << "Answer is: " << tan(num1 * PI / 180) << "\n" << endl;
			break;
		}
		case'X':
		{
			cout << "Goodbye!!";
			Sleep(2000);
			exit(0);
			break;
		}
		default:
			break;
		}
	}
}

bool Calculator::run()
{
	return choice;
}
