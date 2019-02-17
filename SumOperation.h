#include "Operation.h"
#ifndef SumOperation_H
#define SumOperation_H
class SumOperation : public Operation
{
  public:
    double calculate(vector<int> numbers);
};
#endif