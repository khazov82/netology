
#include <Windows.h>
#include <iostream>

using namespace std;

void swap1(int& a, int& b);
void swap2(int& a, int& b);

//------------------------------------------------------------------------------
int main()
{
    int a = 5, b = 8;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "a = " << a << ", b = " << b << endl;

    swap1(a, b);

    cout << "swap с использованием временной переменной" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swap2(a, b);

    cout << "swap без использования временной переменной" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return EXIT_SUCCESS;
}
//------------------------------------------------------------------------------
void swap1(int& a, int& b)
{
    int tmp = a;

    a = b;
    b = tmp;
}
//------------------------------------------------------------------------------
void swap2(int& a, int& b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
//------------------------------------------------------------------------------
