
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    int numberInput = {};

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите число: " << endl;
    cin >> numberInput;
    cout << "Вы ввели: " << numberInput << endl;

    return EXIT_SUCCESS;
}
