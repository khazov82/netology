
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string wordInput = {};

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введите слово: ";
    cin >> wordInput;
    cout << "Вы ввели: " << wordInput << endl;

    return EXIT_SUCCESS;
}
