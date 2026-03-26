
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    const int ARR_SIZE = { 10 };
    int array[ARR_SIZE];
    int min, max;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        array[i] = (i - 4) * 15;
    }

    cout << "Массив: ";
    min = array[0];
    max = array[0];

    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        cout << array[i] << " ";
        min = (min > array[i]) ? array[i] : min;
        max = (max < array[i]) ? array[i] : max;
    }
    cout << endl;

    cout << "Минимальный элемент: "  << min << endl;
    cout << "Максимальный элемент: " << max << endl;

    return EXIT_SUCCESS;
}
