
#include <Windows.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    const int ROWS = { 3 };
    const int COLS = { 6 };
    int array[ROWS][COLS];
    int min_i = 0;
    int min_j = 0;
    int max_i = 0;
    int max_j = 0;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // инициализция массива случайными значениями
    for (size_t i = 0; i < ROWS; i++)
    {
        for (size_t j = 0; j < COLS; j++)
        {
            array[i][j] = rand();
        }
    }

    // поиск и вывод массива, также минимум и максимум
    cout << "Массив: " << endl;

    for (size_t i = 0; i < ROWS; i++)
    {
        for (size_t j = 0; j < COLS; j++)
        {
            if (array[min_i][min_j] > array[i][j])
            {
                min_i = i;
                min_j = j;
            }
            if (array[max_i][max_j] < array[i][j])
            {
                max_i = i;
                max_j = j;
            }
            cout << array[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;

    cout << "Индекс минимального элемента: "  << min_i  << " "  << min_j << endl;
    cout << "Индекс максимального элемента: " << max_i  << " "  << max_j << endl;

    return EXIT_SUCCESS;
}
