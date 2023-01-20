#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    Calculator calc;
    do
    {
        calc.choose_system();
        calc.hello();
        calc.setOperation();
        if (calc.getOperation() == '5')
        {
            if (calc.get_system() == "oct" || calc.get_system() == "hex" || calc.get_system() == "bin")
            {
                calc.setVar1_bin();
            }
            else if (calc.get_system() == "dec")
            {
                calc.setVar1();
            }
            else
            {
                cout << "Invalid operation!" << endl;
            }
        }
        else if (calc.getOperation() == '6')
        {
            break;
        }
        else
        {
            if (calc.get_system() == "oct")
            {
                calc.setVar1_oct();
                calc.setVar2_oct();
                calc.calculate();
                cout << endl << "Dec: " << calc.getResult() << endl;
                cout << endl << "Hex: " << calc.toHex() << endl;
                cout << endl << "Bin: " << calc.toBin() << endl;
            }
            else if (calc.get_system() == "bin")
            {
                calc.setVar1_bin();
                calc.setVar2_bin();
                calc.calculate();
                cout << endl << "Dec: " << calc.getResult() << endl;
                cout << endl << "Hex: " << calc.toHex() << endl;
                cout << endl << "Bin: " << calc.toOct() << endl;
            }
            else if (calc.get_system() == "hex")
            {
                calc.setVar1_hex();
                calc.setVar2_hex();
                calc.calculate();
                cout << endl << "Dec: " << calc.getResult() << endl;
                cout << endl << "Hex: " << calc.toOct() << endl;
                cout << endl << "Bin: " << calc.toBin() << endl;
            }
            else if (calc.get_system() == "dec")
            {
                calc.setVar1();
                calc.setVar2();
                calc.calculate();
                cout << endl << "Dec: " << calc.getResult() << endl;
                cout << endl << "Hex: " << calc.toHex() << endl;
                cout << endl << "Bin: " << calc.toBin() << endl;
                cout << endl << "Oct: " << calc.toOct() << endl;
            }
            else
            {
                cout << endl << "Wybierz sposrod podanych! Wpisz skrot podany przy systemie." << endl;
            }
        }

        system("PAUSE");
        system("cls");
    } while (calc.flag);
    return 0;
}