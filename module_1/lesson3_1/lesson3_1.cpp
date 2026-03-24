
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << boolalpha;
	cout << "Оператор: ||" << endl;
	cout << true  << '\t' << true  << '\t' << (true  || true)  << endl;
	cout << false << '\t' << true  << '\t' << (false || true)  << endl;
	cout << true  << '\t' << false << '\t' << (true  || false) << endl;
	cout << false << '\t' << false << '\t' << (false || false) << endl;
	cout << endl;

	cout << "Оператор: &&" << endl;
	cout << true  << '\t' << true  << '\t' << (true  && true)  << endl;
	cout << false << '\t' << true  << '\t' << (false && true)  << endl;
	cout << true  << '\t' << false << '\t' << (true  && false) << endl;
	cout << false << '\t' << false << '\t' << (false && false) << endl;

	return EXIT_SUCCESS;
}
