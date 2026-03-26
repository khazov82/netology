
#include <iostream>

using namespace std;

int main()
{
    const int ARR_SIZE = { 10 };
    int array[ARR_SIZE];

    // инициализация массива
    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        array[i] = (i + 1) * 10;
    }

    // вывод значений массива
    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        cout << array[i];
        if ((i + 1) < ARR_SIZE)
            cout << ", ";
    }

    return EXIT_SUCCESS;
}
