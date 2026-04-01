
#include <Windows.h>
#include <iostream>

using namespace std;

void counting_function();

//------------------------------------------------------------------------------
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }

    return EXIT_SUCCESS;
}
//------------------------------------------------------------------------------
void counting_function()
{
    static int counter{ 1 };

    cout << "Кол-во вызовов функции counting_function(): " << counter++ << endl;
}
//------------------------------------------------------------------------------
