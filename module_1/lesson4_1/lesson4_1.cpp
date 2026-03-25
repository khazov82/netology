
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int sum = {};
    int val = {};

    do
    {
        cout << "Введите целое число или число '0', чтобы закончить:";
        cin >> val;
        sum += val;

    } while (val);

    cout << "Сумма:" << sum << endl;
    
}
