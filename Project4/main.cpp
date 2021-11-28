#include<iostream>
#include<Windows.h>
#define clear system("cls")

int main()
{
	setlocale(0, "");
	while (true)
	{
		clear;
		std::cout << "[+]Месяца года \n";
		std::cout << "[1]Январь \n";
		std::cout << "[2]Февраль \n";
		std::cout << "[3]Март \n";
		std::cout << "[4]Апрель \n";
		std::cout << "[5]Май \n";
		std::cout << "[6]Июнь \n";
		std::cout << "[7]Июль \n";
		std::cout << "[8]Август \n";
		std::cout << "[9]Сентябрь \n";
		std::cout << "[10]Октябрь \n";
		std::cout << "[11]Ноябрь \n";
		std::cout << "[12]Декабрь \n";
		std::cout << "[+]Выберите месяц:";
		int choose = 0;
		std::cin >> choose;
		switch (choose)
		{
		case 1:
			std::cout << "[+]Выбран месяц \"Январь\"";
			break;
		case 2:
			std::cout << "[+]Выбран месяц \"Февраль\"";
			break;
		case 3:
			std::cout << "[+]Выбран месяц \"Март\"";
			break;
		case 4:
			std::cout << "[+]Выбран месяц \"Апрель\"";
			break;
		case 5:
			std::cout << "[+]Выбран месяц \"Май\"";
			break;
		case 6:
			std::cout << "[+]Выбран месяц \"Июнь\"";
			break;
		case 7:
			std::cout << "[+]Выбран месяц \"Июль\"";
			break;
		case 8:
			std::cout << "[+]Выбран месяц \"Август\"";
			break;
		case 9:
			std::cout << "[+]Выбран месяц \"Сентябрь\"";
			break;
		case 10:
			std::cout << "[+]Выбран месяц \"Октябрь\"";
			break;
		case 11:
			std::cout << "[+]Выбран месяц \"Ноябрь\"";
			break;
		case 12:
			std::cout << "[+]Выбран месяц \"Декабрь\"";
			break;
		default:
			std::cout << "Не правильно введен номер месяца";
			break;
		}
		Sleep(2000);
		clear;
	}

	return 0;
}