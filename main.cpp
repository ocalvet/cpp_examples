#include <iostream>
#include "Calculator.h"
#include "Calculator.cpp"
#include "Operation.h"
#include "SumOperation.h"
#include "SumOperation.cpp"
using namespace std;

int main()
{
    Calculator *calculator = new Calculator();
    calculator->addNumber(1);
    calculator->addNumber(10);
    calculator->addNumber(1);
    calculator->calculate(new SumOperation());
    cout << "Hello World!" << endl;
    return 0;
}