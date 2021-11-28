#include<iostream>
#include<Windows.h>


int main()
{
	setlocale(0, "");
	std::cout << "[+]Геомтерические фигуры\n";
	std::cout << "[1]Линия\n";
	std::cout << "[2]Квадрат\n";
	std::cout << "[3]Прямоугольник\n";
	std::cout << "[4]Треугольник\n";
	std::cout << "[5]Решетка\n";
	std::cout << "[6]Крестик\n";
	std::cout << "[7]Плюс\n\n";
	std::cout << "[+]Выберите фигуру:";
	int menu = 0;
	std::cin >> menu;
	if (menu == 1)
	{
		int lenght = 0;
		char txt;
		system("cls");
		std::cout << "[+]Фигура линия\n\n";
		std::cout << "[+]Выберите тип:\n";
		std::cout << "[1]Горизонтальная\n";
		std::cout << "[2]Вертикальная\n\n";

		std::cout << "[+]Выберите тип:";
		int _menu = 0;
		std::cin >> _menu;
		if (_menu == 1)
		{
			system("cls");
			std::cout << "[+]Длина линии:";
			std::cin >> lenght;
			std::cout << "\n[+]Текстура линии:";
			std::cin >> txt;
			while (0 < lenght)
			{
				std::cout << txt;
				lenght--;
			}
		}
		else if (_menu == 2)
		{
			system("cls");
			std::cout << "[+]Длина линии:";
			std::cin >> lenght;
			std::cout << "\n[+]Текстура линии:";
			std::cin >> txt;
			while (0 < lenght)
			{
				std::cout << txt << "\n";
				lenght--;
			}
		}
	}
	if (menu == 2)
	{
		int size;
		char _ch;
		system("cls");
		std::cout << "[+]Фигура квадрат\n\n";
		std::cout << "[+]Выберите тип:\n";
		std::cout << "[1]Заполненный\n";
		std::cout << "[2]Пустой\n\n";

		std::cout << "[+]Выберите тип:";
		int _menu1 = 0;
		std::cin >> _menu1;
		if (_menu1 == 1)
		{
			system("cls");
			std::cout << "[+]Длина стороны квадрата:";
			std::cin >> size;
			std::cout << "\n[+]Текстура линии:";
			std::cin >> _ch;

			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					std::cout << _ch << " ";
				}
				std::cout << std::endl;
			}
		}
		if (_menu1 == 2)
		{
			system("cls");
			std::cout << "[+]Длина стороны квадрата:";
			std::cin >> size;
			std::cout << "\n[+]Текстура линии:";
			std::cin >> _ch;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i == 0 || j == 0 || j == size - 1 || i == size - 1)
					{
						std::cout << _ch << " ";
					}
					else
					{
						std::cout << "  ";
					}
				}
				std::cout << std::endl;
			}
		}
	}
	if (menu == 3)
	{
		int width = 0,
			height = 0;
		char _ch;
		system("cls");
		std::cout << "[+]Фигура прямоугольник\n\n";
		std::cout << "[+]Выберите тип:\n";
		std::cout << "[1]Пустой\n";
		std::cout << "[2]Заполненный\n\n";

		std::cout << "[+]Выберите тип:";
		int _menu;
		std::cin >> _menu;
		if (_menu == 1)
		{
			system("cls");
			std::cout << "[+]Ширина прямоугольника:";
			std::cin >> width;
			std::cout << "\n[+]Высота прямоугольника:";
			std::cin >> height;
			std::cout << "\n[+]Текстура линии:";
			std::cin >> _ch;
			system("cls");
			for (int y = 0; y < height; y++)
			{
				for (int x = 0; x < width; x++)
				{
					if (y == 0 || x == 0 || y == height - 1 || x == width - 1 )
					{
						std::cout << _ch << " ";
					}
					else
					{
						std::cout << "  ";
					}
				}
				std::cout << std::endl;
			}
			
		}
		if (_menu == 2)
		{
			system("cls");
			std::cout << "[+]Ширина прямоугольника:";
			std::cin >> width;
			std::cout << "[+]Высота прямоугольника:";
			std::cin >> height;
			std::cout << "\n[+]Текстура линии:";
			std::cin >> _ch;
			system("cls");
			for (int y = 0; y < height; y++)
			{
				for (int x = 0; x < width; x++)
				{
					std::cout << _ch << " ";
				}
				std::cout << std::endl;
			}
			
		}
	}
	if (menu == 4)
	{
		int _menu,
			h;
		char ch;
		system("cls");
		std::cout << "[+]Фигура треугольник\n\n";
		std::cout << "[+]Выберите тип:\n";
		std::cout << "[1]Равнобедренный\n";
		std::cout << "[2]Прямоугольный\n\n";

		std::cout << "[+]Выберите тип:";
		std::cin >> _menu;
		if (_menu == 1)
		{
			char ch;
			std::cout << "[+]Высота треугольника:";
			std::cin >> h;
			std::cout << "\n[+]Текстура линии:";
			std::cin >> ch;
			system("cls");
			for (int i = 0; i < h; i++)
			{
				for (int j = 0; j < h - i; j++)
					std::cout << " ";
				for (int j = h - i; j < h + i; j++)
					std::cout << ch;
				for (int j = h + i + 1; j < h * 2; j++)
					std::cout << " ";
				std::cout << "\n";
			}
		}
		if (_menu == 2)
		{
			int h;
			char ch;
			std::cout << "[+]Высота треугольника:";
			std::cin >> h;
			std::cout << "\n[+]Текстура линии:";
			std::cin >> ch;
			system("cls");
			for (int i = 1; i <= h; i++)
			{
				for (int j = 1; j < i; j++)
					std::cout << ch;
				std::cout << "\n";
			}
		}
	}
	if (menu == 5)
	{
		int _menu,
			n;
		char ch;
		while (true)
		{

			system("cls");
			std::cout << "[+]Размер(только нечетные):";
			std::cin >> n;
			if (n % 2 == 0) {
				std::cout << "\nВы ввели четное число!";
				Sleep(1500);
			}
			else
				break;
		}
		std::cout << "\n[+]Текстура линии:";
		std::cin >> ch;
		system("cls");
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (y & 1 || x & 1)
				{
					std::cout << ch << " ";

				}
				else
				{
					std::cout << ". ";
				}
			}
			std::cout << "\n";
		}

	}
	if (menu == 6)
	{
		int _menu,
			n;
		char ch;
		while (true)
		{

			system("cls");
			std::cout << "[+]Размер(только нечетные):";
			std::cin >> n;
			if (n % 2 == 0) {
				std::cout << "\nВы ввели четное число!";
				Sleep(1500);
			}
			else
				break;
		}
		std::cout << "\n[+]Текстура линии:";
		std::cin >> ch;
		system("cls");
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (x == y || x == n - y - 1)
				{
					std::cout << ch << " ";

				}
				else
				{
					std::cout << ". ";
				}
			}
			std::cout << "\n";
		}
	}
	if (menu == 7)
	{
		int _menu,
			n;
		char ch;
		while (true)
		{

			system("cls");
			std::cout << "[+]Размер(только четные):";
			std::cin >> n;
			if (n % 2 == 0) {
				std::cout << "\nВы ввели нечетное число!";
				Sleep(1500);
			}
			else
				break;
		}
		std::cout << "\n[+]Текстура линии:";
		std::cin >> ch;
		system("cls");

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (n / 2 == j || n / 2 == i)
				{
					std::cout << ch << " ";
				}
				else {
					std::cout << ". ";
				}
			}
			std::cout << "\n";
		}
	}
	return 0;
}