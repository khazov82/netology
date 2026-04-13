
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

// программа соединения строк через + и функцию append
//------------------------------------------------------------------------------
int main()
{
	string name = "";
	string surname = "";
	string name_and_surname = "";

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите имя: ";
	cin >> name;
	cout << "Введите фимилию: ";
	cin >> surname;

	name_and_surname = name + " " + surname;
	cout << "Здравствуйте, " + name_and_surname + "!" << endl;

	name.append(" ");
	name.append(surname);
	cout << "Хорошего дня Вам, " + name_and_surname + "!" << endl;
}
//------------------------------------------------------------------------------
