#include <iostream>
#include <string>

using namespace std;

class Calculator
{
private:

    double p_var1;
    double p_var2;
    char p_operation;
    string p_oper_result;

public:
    
    bool flag = true;
    void hello();
    void setVar1();
    void setVar2();
    void setOperation();
    void calculate();
    string getResult();
    string toHex();
    string toBin();
    string toOct();
    char getOperation();
};