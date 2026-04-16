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

	ofstream file("out.txt");

	if (!file)
	{
		cout << "Ошибка открытия файла!" << endl;
		return EXIT_FAILURE;
	}

	cout << "Введите размер массива:";
	cin >> arrSize;

	if (!arrSize)
	{
		cout << "Нулевой размер массива!" << endl;
		return EXIT_FAILURE;
	}

	int* array = new int[arrSize];

	file << arrSize << endl;

	for (int i = 0; i < arrSize; i++)
	{
		cout << "Введите " << (i + 1) << " элемент массива:";
		cin >> array[i];
	}

	for (int i = arrSize - 1; i >= 0; i--)
	{
		file << array[i] << " ";
	}

	file.close();
	delete[] array;

	return EXIT_SUCCESS;
}
