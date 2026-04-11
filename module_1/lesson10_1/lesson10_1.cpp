
#include <Windows.h>
#include <iostream>

using namespace std;

int* create_array(int &size);
void print_array(int *p_arr, int size);
void delete_array(int *p_arr);

//------------------------------------------------------------------------------
int main()
{
	int* p_arr;
	int  arr_size;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	p_arr = create_array(arr_size);
	print_array(p_arr, arr_size);
	delete_array(p_arr);
}
//------------------------------------------------------------------------------
int* create_array(int &size)
{
	cout << "Введите размер массива:";
	cin  >> size;

	int* array { new int[size] };

	for (int i = 0; i < size; i++)
	{
		cout << "Введите " << (i + 1) << " элемент массива: " << endl;
		cin >> array[i];
	}

	return array;
}
//------------------------------------------------------------------------------
void print_array(int *p_arr, int size)
{
	cout << "Содержимое массива:";

	for (int i = 0; i < size; i++)
	{
		cout << p_arr[i] << " ";
	}
	cout << endl;
}
//------------------------------------------------------------------------------
void delete_array(int *p_arr)
{
	delete[] p_arr;
}
//------------------------------------------------------------------------------
