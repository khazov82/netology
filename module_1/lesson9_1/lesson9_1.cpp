
#include <Windows.h>
#include <iostream>

using namespace std;

void print(int* array, int size); // вывод массива на экран

//------------------------------------------------------------------------------
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size1{ 9 };
    int array1[size1] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    const int size2{ 4 };
    int array2[size2] = { 6, 5, 4, 8 };

    const int size3{ 5 };
    int array3[size3] = { 1, 4, 3, 7, 5 };

    print(array1, size1);
    print(array2, size2);
    print(array3, size3);

    return EXIT_SUCCESS;
}
//------------------------------------------------------------------------------
void print(int* array, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}
//------------------------------------------------------------------------------
