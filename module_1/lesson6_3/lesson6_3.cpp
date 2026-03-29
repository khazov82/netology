
#include <Windows.h>
#include <iostream>

using namespace std;

void fibo(int value);
void fibo(int64_t a, int64_t b, int iter, int limit);

int main(int argc, char** argv)
{
    int value;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введите число — номер элемента последовательности Фибоначчи: ";
    cin >> value;
    cout << endl << "Числа Фибоначчи: ";
    fibo(value);

    return EXIT_SUCCESS;
}

void fibo(int value)
{
    fibo(0, 1, 1, value);
}

void fibo(int64_t a, int64_t b, int iter, int limit)
{
    if (iter >= limit)
        return;

    if (iter == 1)
        cout << "0 ";

    cout << b << " ";

    fibo(b, (a + b), ++iter, limit);
}
