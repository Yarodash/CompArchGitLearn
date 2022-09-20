// The program has not been tested, written in notepad++ for the task

#include "calculator.h"
#include <iostream>

int main(){
	
	double a, b;
	
	std::cout << "Enter A: ";
	std::cin >> a;
	
	std::cout << "Enter B: ";
	std::cin >> b;
	
	std::cout << a << " + " << b << " = " << Calculator::Add(a, b) << "\n";
	std::cout << a << " - " << b << " = " << Calculator::Sub(a, b) << "\n";
	std::cout << a << " * " << b << " = " << Calculator::Mul(a, b) << "\n";
	
	return 0;
}