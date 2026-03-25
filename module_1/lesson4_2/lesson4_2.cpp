
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int sum = {};
    int val = {};

    cout << "Введите целое число:";
    cin  >> val;

    while (val % 10)
    {
        sum += val % 10;
        val /= 10;
    }

    cout << "Сумма:" << sum << endl;

    return EXIT_SUCCESS;
}
