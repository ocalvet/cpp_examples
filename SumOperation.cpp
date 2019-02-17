#include "SumOperation.h"

double SumOperation::calculate(vector<int> numbers)
{
    double sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }
    return sum;
}