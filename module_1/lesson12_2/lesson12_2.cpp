#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int arrSize{ 0 };

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream file("in.txt");

	if (!file)
	{
		cout << "Ошибка открытия файла!" << endl;
		return EXIT_FAILURE;
	}

	file >> arrSize;

	if (!arrSize)
	{
		cout << "Нулевой размер массива!" << endl;
		return EXIT_FAILURE;
	}

	int* array = new int[arrSize];

	for (int i = 0; i < arrSize; i++)
	{
		file >> array[i];
	}

	for (int i = arrSize - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}

	file.close();
	delete[] array;

	return EXIT_SUCCESS;
}
