#include<iostream>
#include<cmath>

#ifdef _WIN32
#define clear "cls"
#else
#define clear "clear"
#endif 




double calc(double num1, double num2, char op) {
	switch (op)
	{
	case'+': return num1 + num2;
	case'-': return num1 - num2;
	case'*': return num1 * num2;
	case'/': if (num2 == 0)
		return -1;
		   else
		return num1 / num2;
	case'?': return (num1 + num2) / 2;
	case'!': return (num1 + num2) * 2;
	case'%': return static_cast<int>(num1) % static_cast<int>(num2);
	case'^': return pow(num1, num2);
	default:
		break;
	}
}





int main() {
	char quit = ' ';
	while (quit != 'n')
	{
		system(clear);
		setlocale(0, "");
		std::cout << "[+] Программа калькулятор\n\n";
		std::cout << "[>] Введите первое значение: ";
		double num_1;
		std::cin >> num_1;
		std::cout << "[>] Введите второе значение: ";
		double num_2;
		std::cin >> num_2;
		std::cout << "[>] Введите действие: ";
		char op;
		std::cin >> op;

		std::cout << "\n[!] Результат: " << calc(num_1, num_2, op) ;

		std::cout << "\n\n[?] Хотите посчитать еще раз(y/n): ";
		std::cin >> quit;
	}

	return 0;
}