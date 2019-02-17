#include <vector>
#ifndef Operation_H
#define Operation_H
using namespace std;
class Operation
{
public:
    virtual double calculate(vector<int> numbers) = 0;
};
#endif