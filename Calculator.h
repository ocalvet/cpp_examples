#include "Operation.h"
#ifndef Calculator_H
#define Calculator_H
class Calculator
{
  private:
    vector<int> numbers;

  public:
    Calculator(/* args */);
    ~Calculator();
    void addNumber(int val);
    void calculate(Operation *operation);
};
#endif