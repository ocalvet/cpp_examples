#include <iostream>
#include "Calculator.h"
#include "Operation.h"
using namespace std;

Calculator::Calculator(/* args */)
{
    cout << "Creating calculator" << endl;
    numbers = vector<int>();
}

Calculator::~Calculator()
{
    cout << "Destructing calculator" << endl;
}

void Calculator::addNumber(int number)
{
    numbers.push_back(number);
}

void Calculator::calculate(Operation* operation)
{
    double result = operation->calculate(numbers);
    cout << "Result: " << result << endl; 
}