
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

// программа сравнения строк разнами методами
//------------------------------------------------------------------------------
int main()
{
	string word_must = "малина";
	string word_user = "";

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	do
	{
		cout << "Угадайте слово (ягода - м****а): ";
		cin >> word_user;
	} while (word_must != word_user);

	cout << "Правильно! Вы угадали!" << endl;


	word_must = "банан";

	do
	{
		cout << "Угадайте слово (фрукт - б***н): ";
		cin >> word_user;
	} while (word_must.compare(word_user));

	cout << "Правильно! Вы угадали!" << endl;

}
//------------------------------------------------------------------------------
