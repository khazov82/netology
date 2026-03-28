
#include <Windows.h>
#include <iostream>

using namespace std;

int pow(int val, int pow);

int main(int argc, char** argv)
{
    int value = 5, power = 2;
    int result = pow(value, power);

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << value << " в степени " << power << " = " << result << endl;

    value = 3;
    power = 3;
    result = pow(value, power);

    cout << value << " в степени " << power << " = " << result << endl;

    value = 4;
    power = 4;
    result = pow(value, power);

    cout << value << " в степени " << power << " = " << result << endl;

    return EXIT_SUCCESS;
}

int pow(int value, int p)
{
    int result = value;

    for (int i = 1; i < p; i++)
    {
        result *= value;
    }

    return result;
}
