
#include <Windows.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    const int ARR_SIZE = { 10 };
    int array[ARR_SIZE];
    int min, max;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // инициализция массива случайными значениями
    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        array[i] = rand();
    }

    // вывод массива до сортировки
    cout << "Массив до сортировки: ";

    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // сортировка массива обратным пузырьком
    for (size_t i = 0; i < ARR_SIZE - 1; i++)
    {
        for (size_t j = ARR_SIZE - 1; j > i; j--)
        {
            if (array[j] < array[j - 1])
            {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }

    // вывод массива после сортировки
    cout << "Массив после сортировки: ";

    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
