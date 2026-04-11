
#include <Windows.h>
#include <iostream>

using namespace std;

int** create_two_dim_array(int rows, int cols);
void  delete_two_dim_array(int** p_arr, int rows);
void  fill_two_dim_array(int** p_arr, int rows, int cols);
void  print_two_dim_array(int** p_arr, int rows, int cols);

//------------------------------------------------------------------------------
int main()
{
	int** p_arr;
	int cols, rows;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите количество строк:";
	cin >> rows;
	cout << "Введите количество столбцов:";
	cin >> cols;

	p_arr = create_two_dim_array(rows, cols);
	fill_two_dim_array(p_arr, rows, cols);
	print_two_dim_array(p_arr, rows, cols);
	delete_two_dim_array(p_arr, rows);
}
//------------------------------------------------------------------------------
int** create_two_dim_array(int rows, int cols)
{
	int** array{ new int* [rows] };

	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[cols];
	}

	return array;
}
//------------------------------------------------------------------------------
void fill_two_dim_array(int** p_arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			p_arr[i][j] = (i + 1) * (j + 1);
		}
	}
}
//------------------------------------------------------------------------------
void print_two_dim_array(int** p_arr, int rows, int cols)
{
	cout << "Таблица умножения: " << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << p_arr[i][j] << '\t';
		}
		cout << endl;
	}
}
//------------------------------------------------------------------------------
void delete_two_dim_array(int** p_arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] p_arr[i];
	}
	delete[] p_arr;
}
//------------------------------------------------------------------------------
