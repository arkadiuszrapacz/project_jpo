#include <iostream>
#include <string>

using namespace std;

class Calculator
{
private:

    double p_var1;
    double p_var2;
    string p_var1_bin;
    string p_var2_bin;
    string p_var1_oct;
    string p_var2_oct;
    string p_var1_hex;
    string p_var2_hex;
    char p_operation;
    string p_oper_result;
    string p_choose_system;

public:
    
    bool flag = true;
    void choose_system();
    void hello();
    void setVar1();
    void setVar2();
    string setVar1_bin();
    string setVar2_bin();
    string setVar1_oct();
    string setVar2_oct();
    string setVar1_hex();
    string setVar2_hex();
    void setOperation();
    void calculate();
    string getResult();
    string toHex();
    string toBin();
    string toOct();
    int bin2dec(string bin);
    int oct2dec(string octal);
    int hex2dec(string hexal);
    char getOperation();
    string get_system();
};