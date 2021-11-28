#include<iostream>
#include<Windows.h>
#include<conio.h>


void gotoxy(short x, short y) {
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y });
}


int main() {
	setlocale(0, "");
	float a, b, res;
	std::cout <<
		"+---------------------------------------------+\n"
		"+                  Калькулятор                +\n"
		"+    Введите первое значение:                 +\n"
		"+    Введите второе значение:                 +\n"
		"+    Выберите действие:                       +\n"
		"+---------------------------------------------+\n";
	char op;
	gotoxy(30, 2);
	std::cin >> a;
	gotoxy(30, 3);
	std::cin >> b;
	gotoxy(24, 4);
	std::cin >> op;
	if (op == '+')
	{
		res = a + b;
	}
	else if (op == '-')
	{
		res = a - b;
	}
	else if (op == '/')
	{
		res = a / b;
	}
	else if (op == '*')
	{
		res = a * b;
	}
	else if (op == '%')
	{
		res = static_cast<int>(a) % static_cast<int>(b);
	}
	else {
		std::cout << "Такой операции нет";
		return 0;
	}
	std::cout << "\n     Результат:" << res << std::endl;
	system("pause");
	return 0;

}