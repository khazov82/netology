
#include <iostream>

void print(int* array, int size);
void reverse(int* array, int size);
void swap(int* a, int* b);

//------------------------------------------------------------------------------
int main()
{
    const int size{ 9 };
    int array[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    print(array, size);
    reverse(array, size);
    print(array, size);

    return EXIT_SUCCESS;
}
//------------------------------------------------------------------------------
void print(int* array, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}
//------------------------------------------------------------------------------
void reverse(int* array, int size)
{
    for (size_t i = 0; i < (size / 2); i++)
    {
        swap(&array[i], &array[size-(i+1)]);
    }
}
//------------------------------------------------------------------------------
void swap(int* a, int* b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
//------------------------------------------------------------------------------
