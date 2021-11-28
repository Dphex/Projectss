#include<iostream>
#include<Windows.h>
#include<conio.h>



int main() {
	setlocale(0, "");
	while (true)
	{
		std::cout << "Программа" << "\" Времена года\"\n"
			"[1]Лето\t\t[2]Осень\n[3]Зима\t\t[4]Весна\n";
		std::cout << "[-]Введите значение: ";

		char choose = ' ';
		std::cin >> choose;

		if (choose == '1')
		{
			std::cout << "\n[-]Отдыхаем на чиле на расслабоуни!";
			break;
		}
		else if (choose == '2')
		{
			std::cout << "\n[-]Небо осень кап кап!";
			break;
		}
		else if (choose == '3')
		{
			std::cout << "\n[-]Снега так много как будто декабрь!";
			break;
		}
		else if (choose == '4')
		{
			std::cout << "\n[-]В весеннем лесу очень хорошо";
			break;
		}
		else{
			std::cout << "\n[!]Вы выбрали чето не то!";
			Sleep(1000);
			system("cls");
		}
	}

	return 0;

}