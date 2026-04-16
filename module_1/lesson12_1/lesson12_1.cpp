#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string word = "";

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream file("in.txt");

	if (!file)
	{
		cout << "Ошибка открытия файла!" << endl;
		return EXIT_FAILURE;
	}

	while (file >> word)
	{
		cout << word << endl;
	}

	file.close();

	return EXIT_SUCCESS;
}
