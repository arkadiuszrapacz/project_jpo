#include <iostream>
#include "calculator.h"
#include <iomanip>
#include <bitset>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

void Calculator::choose_system()                                                    // funkcja pobieraj¹ca od u¿ytkownika wybór systemu liczbowego
{
    string choose;
    cout << "Wybierz system, w ktorym chcesz pracowac:" << endl;
    cout << "---------------------------------------" << endl;
    cout << "dec - decymalny" << endl;
    cout << "oct - osemkowy" << endl;
    cout << "hex - szesnastkowy" << endl;
    cout << "bin - binarny" << endl;
    cout << "Wybor: ";
    cin >> choose;
    p_choose_system = choose;
}

string Calculator::get_system()                                                     // funkcja zwracaj¹ca wybór systemu liczbowego
{
    return p_choose_system;
}

void Calculator::menu()                                                             // funkcja, która wita u¿ytkownika oraz przedstawia mu mo¿liwe opcje
{
    cout << endl << "Witam w kalkulatorze dla elektronikow. " << endl;
    cout << "---------------------------------------" << endl;
    cout << "Co moge dla ciebie zrobic?" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Opcje:" << endl;
    cout << "---------------------------------------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Wyjdz" << endl;
    cout << endl;
}

void Calculator::setVar1()                                                          // funkcja pobieraj¹ca od u¿ytkownika wartoœæ pierwszej zmiennej
{
    cout << "Podaj pierwsza wartosc: ";
    cin >> p_var1;
    if (cin.fail())
    {
        cout << "Nalezy wpisac liczbe!" << endl;
        flag = false;
    }
}

void Calculator::setVar2()                                                          // funkcja pobieraj¹ca od u¿ytkownika wartoœæ drugiej zmiennej
{
    cout << "Podaj druga wartosc: ";
    cin >> p_var2;
    if (cin.fail())
    {
        cout << "Nalezy wpisac liczbe!" << endl;
        flag = false;
    }
}

string Calculator::setVar1_bin()                                                    // funkcja pobieraj¹ca od u¿ytkownika wartoœæ pierwszej zmiennej w postaci binarnej,
{                                                                                   // zwracaj¹ca string zawieraj¹cy podan¹ przez u¿ytkownika liczbe binarn¹
    string var;
    cout << "Podaj pierwsza liczbe binarna: ";
    cin >> var;
    if (cin.fail())
    {
        cout << "Nalezy wpisac liczbe!" << endl;
        flag = false;
    }
    p_var1_bin = var;
    return p_var1_bin;
}

string Calculator::setVar2_bin()                                                    // funkcja pobieraj¹ca od u¿ytkownika wartoœæ pierwszej zmiennej w postaci binarnej,
{                                                                                   // zwracaj¹ca string zawieraj¹cy podan¹ przez u¿ytkownika liczbe binarn¹
    string var;
    cout << "Podaj liczbe binarna: ";
    cin >> var;
    if (cin.fail())
    {
        cout << "Nalezy wpisac liczbe!" << endl;
        flag = false;
    }
    p_var2_bin = var;
    return p_var2_bin;
}

string Calculator::setVar1_oct()                                                    // funkcja pobieraj¹ca od u¿ytkownika wartoœæ pierwszej zmiennej w postaci oktalnej,
{                                                                                   // zwracaj¹ca string zawieraj¹cy podan¹ przez u¿ytkownika liczbe oktaln¹
    string var;
    cout << "Podaj pierwsza liczbe w systemie osemkowym: ";
    cin >> var;
    if (cin.fail())
    {
        cout << "Nalezy wpisac liczbe!" << endl;
        flag = false;
    }
    p_var1_oct = var;
    return p_var1_oct;
}

string Calculator::setVar2_oct()                                                    // funkcja pobieraj¹ca od u¿ytkownika wartoœæ drugiej zmiennej w postaci oktalnej,
{                                                                                   // zwracaj¹ca string zawieraj¹cy podan¹ przez u¿ytkownika liczbe oktaln¹
    string var;
    cout << "Podaj pierwsza liczbe w systemie osemkowym: ";
    cin >> var;
    if (cin.fail())
    {
        cout << "Nalezy wpisac liczbe!" << endl;
        flag = false;
    }
    p_var2_oct = var;
    return p_var2_oct;
}

string Calculator::setVar1_hex()                                                    // funkcja pobieraj¹ca od u¿ytkownika wartoœæ pierwszej zmiennej w postaci heksadecymalnej,
{                                                                                   // zwracaj¹ca string zawieraj¹cy podan¹ przez u¿ytkownika liczbe heksadecymaln¹
    string var;
    cout << "Podaj pierwsza liczbe w systemie szesnastkowym: ";
    cin >> var;
    if (cin.fail())
    {
        cout << "Nalezy wpisac liczbe!" << endl;
        flag = false;
    }
    p_var1_hex = var;
    return p_var1_hex;
}

string Calculator::setVar2_hex()                                                    // funkcja pobieraj¹ca od u¿ytkownika wartoœæ drugiej zmiennej w postaci heksadecymalnej,
{                                                                                   // zwracaj¹ca string zawieraj¹cy podan¹ przez u¿ytkownika liczbe heksadecymaln¹
    string var;
    cout << "Podaj pierwsza liczbe w systemie szesnastkowym: ";
    cin >> var;
    if (cin.fail())
    {
        cout << "Nalezy wpisac liczbe!" << endl;
        flag = false;
    }
    p_var2_hex = var;
    return p_var2_hex;
}

void Calculator::setOperation()                                                     // funkcja pobieraj¹ca od u¿ytkownika rodzaj operacji matematycznej
{
    char operation;
    cout << "Wybierz operacje (podaj numer operacji): ";
    cin >> operation;
    cout << endl;
    p_operation = operation;
}

char Calculator::getOperation()                                                     // funkcja zwracaj¹ca wybór operacji matematycznej
{
    return p_operation;
}

void Calculator::calculate()                                                        // funkcja obliczaj¹ca wynik dzia³ania w zale¿noœci od wyboru systemu liczbowego oraz operacji matematycznej
{
    stringstream resultStream;
    resultStream << fixed << setprecision(2);
    if (p_choose_system == "bin")
    {
        p_var1 = bin2dec(p_var1_bin);
        p_var2 = bin2dec(p_var2_bin);
    }
    else if (p_choose_system == "oct")
    {
        p_var1 = oct2dec(p_var1_oct);
        p_var2 = oct2dec(p_var2_oct);
    }
    else if (p_choose_system == "hex")
    {
        p_var1 = hex2dec(p_var1_hex);
        p_var2 = hex2dec(p_var2_hex);
    }

    switch (p_operation)
    {
    case '1':
        resultStream << p_var1 + p_var2;
        break;
    case '2':
        resultStream << p_var1 - p_var2;
        break;
    case '3':
        resultStream << p_var1 * p_var2;
        break;
    case '4':
        if (p_var2 == 0)
            cout << "Nie mozna dzielic przez 0!" << endl;
        else
            resultStream << p_var1 / p_var2;
        break;
    case '5':
        exit(0);
    default:
        cout << "Invalid operation" << endl;
        break;
    }
    p_oper_result = resultStream.str();
}

string Calculator::getResult()                                                      // funkcja zwracaj¹ca wynik operacji
{
    return p_oper_result;
}

string Calculator::dec2hex()                                                        // funkcja konwertuj¹ca liczbê decymaln¹ na liczbe heksadecymaln¹,
{                                                                                   // zwracaj¹ca string zawieraj¹cy wartoœæ w postaci heksadecymalnej
    stringstream resultStream;
    long long int resultInt;

    resultStream << p_oper_result;
    resultStream >> resultInt;
    resultStream.clear();

    resultStream << "\t\t\t0x" << hex << resultInt;

    return resultStream.str();
}

string Calculator::dec2bin()                                                        // funkcja konwertuj¹ca liczbê decymaln¹ na liczbe binarn¹,
{                                                                                   // zwracaj¹ca string zawieraj¹cy wartoœæ w postaci binarnej
    stringstream resultStream;
    long long int resultInt;

    resultStream << p_oper_result;
    resultStream >> resultInt;
    resultStream.clear();

    resultStream << "\t\t\t0b" << bitset<64>(resultInt);

    return resultStream.str();
}

string Calculator::dec2oct()                                                        // funkcja konwertuj¹ca liczbê decymaln¹ na liczbe oktaln¹,
{                                                                                   // zwracaj¹ca string zawieraj¹cy wartoœæ w postaci decymalnej
    stringstream resultStream;
    long long int resultInt;

    resultStream << p_oper_result;
    resultStream >> resultInt;
    resultStream.clear();

    resultStream << "\t\t\t0" << oct << resultInt;

    return resultStream.str();
}

int Calculator::bin2dec(string bin)                                                 // funkcja konwertuj¹ca liczbê binarn¹ na liczbê decymaln¹,
{                                                                                   // zwracaj¹ca int zawieraj¹cy wartoœæ w postaci decymalnej
    int dec_bin = strtol(bin.c_str(), NULL, 2);
    return dec_bin;
}

int Calculator::oct2dec(string octal)                                               // funkcja konwertuj¹ca liczbê oktaln¹ na liczbê decymaln¹,
{                                                                                   // zwracaj¹ca int zawieraj¹cy wartoœæ w postaci decymalnej
    int dec_octal = strtol(octal.c_str(), NULL, 8);
    return dec_octal;
}

int Calculator::hex2dec(string hexal)                                               // funkcja konwertuj¹ca liczbê heksadecymaln¹ na liczbê decymaln¹,
{                                                                                   // zwracaj¹ca int zawieraj¹cy wartoœæ w postaci decymalnej
    int dec_hexal = strtol(hexal.c_str(), NULL, 16);
    return dec_hexal;
}
