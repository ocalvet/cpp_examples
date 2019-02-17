#include <iostream>
using namespace std;
class Calculator
{
  private:
    /* data */
  public:
    Calculator(/* args */);
    ~Calculator();
};

Calculator::Calculator(/* args */)
{
    cout << "Creating calculator" << endl;
}

Calculator::~Calculator()
{
    cout << "Destructing calculator" << endl;
}

int main()
{
    Calculator *calculator = new Calculator();
    cout << "Hello World!" << endl;
    return 0;
}