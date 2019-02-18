#include <iostream>
#include "Calculator.h"
#include "Calculator.cpp"
#include "Operation.h"
#include "SumOperation.h"
#include "SumOperation.cpp"
#include "List.h"
#include "List.cpp"
using namespace std;

int main()
{
    Calculator *calculator = new Calculator();
    calculator->addNumber(12);
    calculator->addNumber(10);
    calculator->addNumber(1);
    calculator->calculate(new SumOperation());
    cout << endl;
    // Test list
    List<int> *numbers = new List<int>();
    numbers->add(10);
    numbers->add(13);
    numbers->add(21);
    numbers->print();
    return 0;
}