
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int val = {};

    cout << "Введите целое число:";
    cin >> val;

    cout << "Таблица умножения для этого числа:" << endl;

    for (int mult = 1; mult <= 10; mult++)
    {
        printf("%d\tx\t%d\t=\t%d\n", val, mult, (val * mult));
    }

    return EXIT_SUCCESS;
}
