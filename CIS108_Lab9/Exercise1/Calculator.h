//Tamishia Ayala
//This is a simple calculator program
//04/17/2019
#pragma once
class Calculator
{
public:
	Calculator();//Class cotrutor
	~Calculator();//Class deconstructor
	void menu();//To display intial Instructions
	void getUserInput();//to get expresson
	void getOutput();//Result
	bool run();//Getcurrnt status
	

private:
	double num1, num2,total;//declare input variables
	char op;//declare operator variable
	bool choice;//declare choice variable
	double result = 0.0;//clear value
};

