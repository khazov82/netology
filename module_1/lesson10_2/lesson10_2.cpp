
#include <Windows.h>
#include <iostream>

using namespace std;

double* create_array(int& size);
void print_array(double* p_arr, int size);
void delete_array(double* p_arr);

//------------------------------------------------------------------------------
int main()
{
	double* p_arr;
	int arr_size;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите размер массива:";
	cin >> arr_size;

	p_arr = create_array(arr_size);
	print_array(p_arr, arr_size);
	delete_array(p_arr);
}
//------------------------------------------------------------------------------
double* create_array(int& size)
{
	double* array{ new double[size] {} };

	return array;
}
//------------------------------------------------------------------------------
void print_array(double* p_arr, int size)
{
	cout << "Содержимое массива:";

	for (int i = 0; i < size; i++)
	{
		cout << p_arr[i] << " ";
	}
	cout << endl;
}
//------------------------------------------------------------------------------
void delete_array(double* p_arr)
{
	delete[] p_arr;
}
//------------------------------------------------------------------------------
