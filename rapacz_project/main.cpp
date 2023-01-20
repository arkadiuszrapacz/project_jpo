#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    while (true)
    {
        Calculator calc;

        calc.hello();
        calc.setOperation();
        if (calc.getOperation() == '5')
        {
            calc.setVar1();
        }
        else if (calc.getOperation() == '6')
        {
            break;
        }
        else
        {
            calc.setVar1();
            calc.setVar2();
        }
        calc.calculate();
        cout << "Result: " << calc.getResult() << endl;
        cout << "Hex: " << calc.toHex() << endl;
        cout << "Bin: " << calc.toBin() << endl;
        cout << "Oct: " << calc.toOct() << endl;

        getchar(); getchar();
        system("cls");
    }
    return 0;
}