#include<iostream>
#include<Windows.h>
#include<conio.h>

#define clear system("cls")

//delete cursor
void CursoreVisible(bool visible, DWORD size) {
	CONSOLE_CURSOR_INFO inf;
	inf.bVisible = visible;
	inf.dwSize = size;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &inf);
}



int main()
{
	bool flag = false;
	bool flag1 = false;
	std::string rus[15] = { "Яблоко","Побег","Плод","Социализм","Бордюр","Дорога","Лед","Дерево", "Привет","Пока","Мышка","Монитор","ЦПУ","ОЗУ","ПЗУ", };
	std::string eng[15] = { "Apple","Escape","Fetus","Socialism","Curb","Road","Ice","Tree", "Hi","Bye","Mouse","Monitor","CPU","RAM","ROM", };
	setlocale(0, "");
	CursoreVisible(false, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	std::cout << "[+]Переводчик\n";
	std::cout << "[1]Русские слова\n";
	std::cout << "[2]Английские слова\n\n";
	std::cout << "[3]Выйти\n";
	switch (_getch())
	{
	case '1':
		flag = true;
		break;
	case '2':
		flag1 = true;
		break;
	case '3':
		exit;
	default:
		exit;
		break;
	}
	if (flag == true)
	{
		while (true)
		{

			CursoreVisible(true, 10);
			clear;
			std::cout << "[+]Переводчик \"Список русских слов\"\n";
			std::cout << "[1]" << rus[0] << std::endl;
			std::cout << "[2]" << rus[1] << std::endl;
			std::cout << "[3]" << rus[2] << std::endl;
			std::cout << "[4]" << rus[3] << std::endl;
			std::cout << "[5]" << rus[4] << std::endl;
			std::cout << "[6]" << rus[5] << std::endl;
			std::cout << "[7]" << rus[6] << std::endl;
			std::cout << "[8]" << rus[7] << std::endl;
			std::cout << "[9]" << rus[8] << std::endl;
			std::cout << "[10]" << rus[9] << std::endl;
			std::cout << "[11]" << rus[10] << std::endl;
			std::cout << "[12]" << rus[11] << std::endl;
			std::cout << "[13]" << rus[12] << std::endl;
			std::cout << "[14]" << rus[13] << std::endl;
			std::cout << "[15]" << rus[14] << std::endl << std::endl;
			std::cout << "[+]Введите номер: ";
			int choose;
			std::cin >> choose;
			std::cout << std::endl;
			switch (choose)
			{
			case 1:
				std::cout << "[+]Перевод: " << rus[0] << " -> " << eng[0];
				Sleep(2000);
				break;
			case 2:
				std::cout << "[+]Перевод: " << rus[1] << " -> " << eng[1];
				Sleep(2000);
				break;
			case 3:
				std::cout << "[+]Перевод: " << rus[2] << " -> " << eng[2];
				Sleep(2000);
				break;
			case 4:
				std::cout << "[+]Перевод: " << rus[3] << " -> " << eng[3];
				Sleep(2000);
				break;
			case 5:
				std::cout << "[+]Перевод: " << rus[4] << " -> " << eng[4];
				Sleep(2000);
				break;
			case 6:
				std::cout << "[+]Перевод: " << rus[5] << " -> " << eng[5];
				Sleep(2000);
				break;
			case 7:
				std::cout << "[+]Перевод: " << rus[6] << " -> " << eng[6];
				Sleep(2000);
				break;
			case 8:
				std::cout << "[+]Перевод: " << rus[7] << " -> " << eng[7];
				Sleep(2000);
				break;
			case 9:
				std::cout << "[+]Перевод: " << rus[8] << " -> " << eng[8];
				Sleep(2000);
				break;
			case 10:
				std::cout << "[+]Перевод: " << rus[9] << " -> " << eng[9];
				Sleep(2000);
				break;
			case 11:
				std::cout << "[+]Перевод: " << rus[10] << " -> " << eng[10];
				Sleep(2000);
				break;
			case 12:
				std::cout << "[+]Перевод: " << rus[11] << " -> " << eng[11];
				Sleep(2000);
				break;
			case 13:
				std::cout << "[+]Перевод: " << rus[12] << " -> " << eng[12];
				Sleep(2000);
				break;
			case 14:
				std::cout << "[+]Перевод: " << rus[13] << " -> " << eng[13];
				Sleep(2000);
				break;
			case 15:
				std::cout << "[+]Перевод: " << rus[14] << " -> " << eng[14];
				Sleep(2000);
				break;
			default:
				break;
			}
		}
	}
	else if (flag1 == true)
	{
		while (true)
		{
			CursoreVisible(true, 10);
			clear;
			std::cout << "[+]Переводчик \"Список русских слов\"\n";
			std::cout << "[1]" << eng[0] << std::endl;
			std::cout << "[2]" << eng[1] << std::endl;
			std::cout << "[3]" << eng[2] << std::endl;
			std::cout << "[4]" << eng[3] << std::endl;
			std::cout << "[5]" << eng[4] << std::endl;
			std::cout << "[6]" << eng[5] << std::endl;
			std::cout << "[7]" << eng[6] << std::endl;
			std::cout << "[8]" << eng[7] << std::endl;
			std::cout << "[9]" << eng[8] << std::endl;
			std::cout << "[10]" << eng[9] << std::endl;
			std::cout << "[11]" << eng[10] << std::endl;
			std::cout << "[12]" << eng[11] << std::endl;
			std::cout << "[13]" << eng[12] << std::endl;
			std::cout << "[14]" << eng[13] << std::endl;
			std::cout << "[15]" << eng[14] << std::endl;
			std::cout << "[+] Enter your number: ";
			int _choose;
			std::cin >> _choose;
			std::cout << std::endl;
			switch (_choose)
			{
			case 1:
				std::cout << "[+]Перевод: " << eng[0] << " -> " << rus[0];
				Sleep(2000);
				break;
			case 2:
				std::cout << "[+]Перевод: " << eng[1] << " -> " << rus[1];
				Sleep(2000);
				break;
			case 3:
				std::cout << "[+]Перевод: " << eng[2] << " -> " << rus[2];
				Sleep(2000);
				break;
			case 4:
				std::cout << "[+]Перевод: " << eng[3] << " -> " << rus[3];
				Sleep(2000);
				break;
			case 5:
				std::cout << "[+]Перевод: " << eng[4] << " -> " << rus[4];
				Sleep(2000);
				break;
			case 6:
				std::cout << "[+]Перевод: " << eng[5] << " -> " << rus[5];
				Sleep(2000);
				break;
			case 7:
				std::cout << "[+]Перевод: " << eng[6] << " -> " << rus[6];
				Sleep(2000);
				break;
			case 8:
				std::cout << "[+]Перевод: " << eng[7] << " -> " << rus[7];
				Sleep(2000);
				break;
			case 9:
				std::cout << "[+]Перевод: " << eng[8] << " -> " << rus[8];
				Sleep(2000);
				break;
			case 10:
				std::cout << "[+]Перевод: " << eng[9] << " -> " << rus[9];
				Sleep(2000);
				break;
			case 11:
				std::cout << "[+]Перевод: " << eng[10] << " -> " << rus[10];
				Sleep(2000);
				break;
			case 12:
				std::cout << "[+]Перевод: " << eng[11] << " -> " << rus[11];
				Sleep(2000);
				break;
			case 13:
				std::cout << "[+]Перевод: " << eng[12] << " -> " << rus[12];
				Sleep(2000);
				break;
			case 14:
				std::cout << "[+]Перевод: " << eng[13] << " -> " << rus[13];
				Sleep(2000);
				break;
			case 15:
				std::cout << "[+]Перевод: " << eng[14] << " -> " << rus[14];
				Sleep(2000);
				break;
			default:
				break;
			}
		}

	}

	return 0;
}