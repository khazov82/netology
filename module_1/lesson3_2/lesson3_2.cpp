
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите первое число:";
	cin  >> num1;
	cout << "Введите второе число:";
	cin  >> num2;
	cout << "Введите третье число:";
	cin  >> num3;

	int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
	int min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
	int mid = num1 + num2 + num3 - max - min;

	cout << "Результат: " << max << " " << mid << " " << min << endl;

	return EXIT_SUCCESS;
}
