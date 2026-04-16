
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int** create_array(int rows, int cols);
void  print_array(int** p_arr, int rows, int cols);
void  fill_array(ifstream& file, int** p_arr, int rows, int cols);
void  delete_array(int** p_arr, int rows);

//------------------------------------------------------------------------------
int main()
{
	int rows{ 0 }, cols{ 0 };

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream file("in.txt");

	if (!file)
	{
		cout << "Ошибка открытия файла!" << endl;
		return EXIT_FAILURE;
	}

	file >> rows >> cols;

	if (!rows || !cols)
	{
		cout << "Ошибка в размере массива!" << endl;
		return EXIT_FAILURE;
	}

	int** arr = create_array(rows, cols);

	fill_array(file, arr, rows, cols);

	print_array(arr, rows, cols);

	delete_array(arr, rows);
}
//------------------------------------------------------------------------------
int** create_array(int rows, int cols)
{
	int** array{ new int* [rows] };

	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[cols];
	}

	return array;
}
//------------------------------------------------------------------------------
void  fill_array(ifstream& file, int** p_arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			file >> p_arr[i][j];
		}
	}
}
//------------------------------------------------------------------------------
void print_array(int** p_arr, int rows, int cols)
{
	cout << "Содержимое массива из файла (наоборот): " << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = cols - 1; j >= 0; j--)
		{
			cout << p_arr[i][j] << '\t';
		}
		cout << endl;
	}
}
//------------------------------------------------------------------------------
void delete_array(int** p_arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] p_arr[i];
	}
	delete[] p_arr;
}
//------------------------------------------------------------------------------
