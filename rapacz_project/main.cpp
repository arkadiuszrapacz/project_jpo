#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    Calculator calc;
    do
    {
        calc.choose_system();
        if (calc.get_system() == "oct" || calc.get_system() == "hex" || calc.get_system() == "bin" || calc.get_system() == "dec")
        {
            calc.menu();
            calc.setOperation();

            if (calc.getOperation() == '5')
            {
                break;
            }
            else if (calc.getOperation() == '1' || calc.getOperation() == '2' || calc.getOperation() == '3' || calc.getOperation() == '4' || calc.getOperation() == '5')
            {
                if (calc.get_system() == "oct")
                {
                    calc.setVar1_oct();
                    calc.setVar2_oct();
                    calc.calculate();
                    cout << endl << "Dec: " << calc.getResult() << endl;
                    cout << endl << "Hex: " << calc.dec2hex() << endl;
                    cout << endl << "Bin: " << calc.dec2bin() << endl;
                    cout << endl << "Oct: " << calc.dec2oct() << endl;
                }
                else if (calc.get_system() == "bin")
                {
                    calc.setVar1_bin();
                    calc.setVar2_bin();
                    calc.calculate();
                    cout << endl << "Dec: " << calc.getResult() << endl;
                    cout << endl << "Hex: " << calc.dec2hex() << endl;
                    cout << endl << "Bin: " << calc.dec2bin() << endl;
                    cout << endl << "Oct: " << calc.dec2oct() << endl;
                }
                else if (calc.get_system() == "hex")
                {
                    calc.setVar1_hex();
                    calc.setVar2_hex();
                    calc.calculate();
                    cout << endl << "Dec: " << calc.getResult() << endl;
                    cout << endl << "Hex: " << calc.dec2hex() << endl;
                    cout << endl << "Oct: " << calc.dec2oct() << endl;
                    cout << endl << "Bin: " << calc.dec2bin() << endl;
                }
                else if (calc.get_system() == "dec")
                {
                    calc.setVar1();
                    calc.setVar2();
                    calc.calculate();
                    cout << endl << "Dec: " << calc.getResult() << endl;
                    cout << endl << "Hex: " << calc.dec2hex() << endl;
                    cout << endl << "Bin: " << calc.dec2bin() << endl;
                    cout << endl << "Oct: " << calc.dec2oct() << endl;
                }
            }
            else
            {
                cout << "Wybierz sposrob podanych operacji!" << endl;
            }

        }
        else
        {
            cout << "Wybierz sposrod podanych skrotow!" << endl;
        }
        
        system("PAUSE");
        system("cls");
    } while (calc.flag);
    return 0;
}