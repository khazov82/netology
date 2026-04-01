
#include <Windows.h>
#include <iostream>

using namespace std;

namespace sum
{
    int calc(int x, int y)
    {
        return (x + y);
    }
}

namespace diff
{
    int calc(int x, int y)
    {
        return (x - y);
    }
}

namespace mult
{
    int calc(int x, int y)
    {
        return (x * y);
    }
}

namespace division
{
    int calc(int x, int y)
    {
        return (x / y);
    }
}

//------------------------------------------------------------------------------
int main()
{
    int x{ 6 }, y{ 9 };

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Переменные: " << x << " и " << y << endl;

    cout << "Сложение: " << sum::calc(x, y) << endl;
    cout << "Вычитание: " << diff::calc(x, y) << endl;
    cout << "Умножение: " << mult::calc(x, y) << endl;
    cout << "Деление: " << division::calc(x, y) << endl;

    return EXIT_SUCCESS;
}
//------------------------------------------------------------------------------
