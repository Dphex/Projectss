#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<ctime>


#define CLEAR system("cls")
#define PAUSE Sleep(1500);



void gotoxy(short x, short y) {
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y });
}





class cGame
{
public:
	void menu() {
		while (true)
		{
			setColor(menu_Color);

			CLEAR;
			std::cout << "[+] Игра крестики-нолики\n\n";
			std::cout << "[1] Новая игра \n";
			std::cout << "[2] Настройки\n";
			std::cout << "[3] Правила\n";
			std::cout << "[q] Выход\n";

			std::cout << "[+] Выберите пункт: ";
			char choose;
			std::cin >> choose;
			switch (choose)
			{
			case '1':
				playVsWho();
				break;
			case '2':
				settings();
				break;
			case '3':
				rules();
				break;
			case 'q':
				exit(0);
				break;
			default:
				break;
			}
		}

	}



	void playVsWho() {
		while (true)
		{
			setColor(menu_Color);
			CLEAR;
			std::cout << "[+] Как вы хотите сыграть?\n\n";
			std::cout << "[1] Человек vs Человек \n";
			std::cout << "[2] Человек vs Компьютер\n";
			std::cout << "[+] Выберите пункт: ";
			char choose;
			std::cin >> choose;

			if (choose == '1')
			{
				logic();
			}
			else if (choose == '2')
			{
				vsBot();
			}
			else
			{
				break;
			}

		}
	}

	void vsBot() {
		int k = 0;
		whoWin = 0;
		X_Skin = 'X';
		restartGame();
		map();
		while (checkWin(k) != true)
		{
			moveX();
			if (checkWin(k) == true)
			{
				break;
			}
			moveBot();
			k++;
		}


		setColor(7);
		if (whoWin == 1)
		{
			player1Win();
		}
		else if (whoWin == 3)
		{
			botWin();
		}
		else if (whoWin == 4)
		{
			drawP();
		}

		menu();
	}


	void rules() {
		CLEAR;
		setColor(menu_Color);
		std::cout << "[!] Правила игры\n\n";
		std::cout << "Игроки по очереди ставят на свободные клетки поля 3x3 знаки(один всегда крестики, другой всегда нолики).\n";
		std::cout << "Первый, выстроивший в ряд 3 своих фигуры по вертикали, горизонтали или диагонали, выигрывает.\n";
		std::cout << "Первый ход делает игрок, ставящий крестики.\n";

		gotoxy(0, 6);
		system("pause");
		menu();
	}

	void settings() {
		setColor(menu_Color);
		while (true)
		{

			CLEAR;
			std::cout << "[+] Настройки\n\n";
			std::cout << "[1] Изменение цвета Х\n";
			std::cout << "[2] Изменение цвета О\n";
			std::cout << "[3] Изменение цвета карты\n";
			std::cout << "[4] Изменение цвета меню\n";
			std::cout << "[5] Кто ходит первым?\n";
			std::cout << "[6] Выход в меню\n";
			std::cout << "[+] Выберите пункт: ";
			char choose;
			std::cin >> choose;
			switch (choose)
			{
			case'1':
				setColorX();
				break;
			case'2':
				setColorO();
				break;
			case'3':
				setColorMap();
				break;
			case'4':
				setColorMenu();
				break;
			case'5': {
				CLEAR;
				std::cout << "[?]Кто ходит первым ?\n[1] Крестик\t[2]Нолик";
				char choose;
				std::cout << "\n[>]";
				std::cin >> choose;
				if (choose == '1')
				{
					X_Skin = 'X';
					O_Skin = 'O';
				}
				else if (choose == '2')
				{
					X_Skin = 'O';
					O_Skin = 'X';
				}
				break;
			}
			case'6':
				menu();
				break;
			default:
				break;
			}
		}
	}

	void setColorX() {

		while (true)
		{
			CLEAR;
			setColor(menu_Color);
			std::cout << "[+] Цвет Х\n\n";
			setColor(2);
			std::cout << "[1] Зеленый\n"; // 2
			setColor(1);
			std::cout << "[2] Синий\n"; // 1
			setColor(6);
			std::cout << "[3] Желтый\n"; // 6
			setColor(4);
			std::cout << "[4] Красный\n"; // 4
			setColor(menu_Color);
			std::cout << "[5] Выход в настройки\n\n";

			std::cout << "[+] Выберите пункт: ";

			char choose;
			std::cin >> choose;
			switch (choose)
			{
			case'1':
				CLEAR;
				x_Color = 2;
				setColor(2);
				std::cout << "[!]Выбран цвет зеленый";
				PAUSE;
				break;
			case'2':
				CLEAR;
				x_Color = 1;
				setColor(1);
				std::cout << "[!]Выбран цвет синий";
				PAUSE;
				break;
			case'3':
				CLEAR;
				x_Color = 6;
				setColor(6);
				std::cout << "[!]Выбран цвет желтый";
				PAUSE;
				break;
			case'4':
				CLEAR;
				x_Color = 4;
				setColor(4);
				std::cout << "[!]Выбран цвет красный";
				PAUSE;
				break;
			case'5':
				settings();
				break;
			default:
				break;
			}
		}

	}

	void setColorO() {
		while (true)
		{
			CLEAR;
			setColor(menu_Color);
			std::cout << "[+] Цвет О\n\n";
			setColor(2);
			std::cout << "[1] Зеленый\n"; // 2
			setColor(1);
			std::cout << "[2] Синий\n"; // 1
			setColor(6);
			std::cout << "[3] Желтый\n"; // 6
			setColor(4);
			std::cout << "[4] Красный\n"; // 4
			setColor(menu_Color);
			std::cout << "[5] Выход в настройки\n\n";

			std::cout << "[+] Выберите пункт: ";

			char choose;
			std::cin >> choose;
			switch (choose)
			{
			case'1':
				CLEAR;
				o_Color = 2;
				setColor(2);
				std::cout << "[!]Выбран цвет зеленый";
				PAUSE;
				break;
			case'2':
				CLEAR;
				o_Color = 1;
				setColor(1);
				std::cout << "[!]Выбран цвет синий";
				PAUSE;
				break;
			case'3':
				CLEAR;
				o_Color = 6;
				setColor(6);
				std::cout << "[!]Выбран цвет желтый";
				PAUSE;
				break;
			case'4':
				CLEAR;
				o_Color = 4;
				setColor(4);
				std::cout << "[!]Выбран цвет красный";
				PAUSE;
				break;
			case'5':
				settings();
				break;
			default:
				break;
			}
		}
	}

	void setColorMap() {
		while (true)
		{
			CLEAR;
			setColor(menu_Color);
			std::cout << "[+] Цвет карты\n\n";
			setColor(2);
			std::cout << "[1] Зеленый\n"; // 2
			setColor(1);
			std::cout << "[2] Синий\n"; // 1
			setColor(6);
			std::cout << "[3] Желтый\n"; // 6
			setColor(4);
			std::cout << "[4] Красный\n"; // 4
			setColor(menu_Color);
			std::cout << "[5] Выход в настройки\n\n";

			std::cout << "[+] Выберите пункт: ";

			char choose;
			std::cin >> choose;
			switch (choose)
			{
			case'1':
				CLEAR;
				map_Color = 2;
				setColor(2);
				std::cout << "[!]Выбран цвет зеленый";
				PAUSE;
				break;
			case'2':
				CLEAR;
				map_Color = 1;
				setColor(1);
				std::cout << "[!]Выбран цвет синий";
				PAUSE;
				break;
			case'3':
				CLEAR;
				map_Color = 6;
				setColor(6);
				std::cout << "[!]Выбран цвет желтый";
				PAUSE;
				break;
			case'4':
				CLEAR;
				map_Color = 4;
				setColor(4);
				std::cout << "[!]Выбран цвет красный";
				PAUSE;
				break;
			case'5':
				settings();
				break;
			default:
				break;
			}
		}
	}

	void setColorMenu() {
		while (true)
		{
			CLEAR;
			setColor(7);
			std::cout << "[+] Цвет меню\n\n";
			setColor(2);
			std::cout << "[1] Зеленый\n"; // 2
			setColor(1);
			std::cout << "[2] Синий\n"; // 1
			setColor(6);
			std::cout << "[3] Желтый\n"; // 6
			setColor(4);
			std::cout << "[4] Красный\n"; // 4
			setColor(7);
			std::cout << "[5] Выход в настройки\n\n";

			std::cout << "[+] Выберите пункт: ";

			char choose;
			std::cin >> choose;
			switch (choose)
			{
			case'1':
				CLEAR;
				menu_Color = 2;
				setColor(2);
				std::cout << "[!]Выбран цвет зеленый";
				PAUSE;
				break;
			case'2':
				CLEAR;
				menu_Color = 1;
				setColor(1);
				std::cout << "[!]Выбран цвет синий";
				PAUSE;
				break;
			case'3':
				CLEAR;
				menu_Color = 6;
				setColor(6);
				std::cout << "[!]Выбран цвет желтый";
				PAUSE;
				break;
			case'4':
				CLEAR;
				menu_Color = 4;
				setColor(4);
				std::cout << "[!]Выбран цвет красный";
				PAUSE;
				break;
			case'5':
				settings();
				break;
			default:
				break;
			}
		}


	}

	void logic() {
		int k = 0;
		whoWin = 0;
		restartGame();
		map();
		while (checkWin(k) != true)
		{
			k += 2;
			moveX();
			if (checkWin(k) == true)
			{
				break;
			}
			moveY();
		}


		setColor(7);
		if (whoWin == 1)
		{
			player1Win();
		}
		else if (whoWin == 2)
		{
			player2Win();
		}
		else if (whoWin == 4)
		{
			drawP();
		}

		menu();

	}


	void map() {
		CLEAR;
		setColor(map_Color);
		for (int i = 0; i < size + 3; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i == 0 || j == 0 || i == size + 2 || j == size - 1 ||
					j == 3 || j == 6 || i == 4 || i == 8)
				{
					std::cout << "# ";
				}
				else
				{
					std::cout << "  ";
				}
			}
			std::cout << "\n";
		}

	}

	void drawX() {
		switch (x)
		{
		case 1:
			if (check[0] == 1 || checkBot[0] == 1 || checkX[0] == 1)
			{
				moveX();
				break;
			}
			checkX[0] = 1;
			gotoxy(3, 2);
			setColor(x_Color);
			std::cout << X_Skin;
			break;
		case 2:
			if (check[1] == 1 || checkBot[1] == 1 || checkX[1] == 1)
			{
				moveX();
				break;
			}
			checkX[1] = 1;
			gotoxy(9, 2);
			setColor(x_Color);
			std::cout << X_Skin;
			break;
		case 3:
			if (check[2] == 1 || checkBot[2] == 1 || checkX[2] == 1)
			{
				moveX();
				break;
			}
			checkX[2] = 1;
			gotoxy(15, 2);
			setColor(x_Color);
			std::cout << X_Skin;
			break;
		case 4:
			if (check[3] == 1 || checkBot[3] == 1 || checkX[3] == 1)
			{
				moveX();
				break;
			}
			checkX[3] = 1;
			gotoxy(3, 6);
			setColor(x_Color);
			std::cout << X_Skin;
			break;
		case 5:
			if (check[4] == 1 || checkBot[4] == 1 || checkX[4] == 1)
			{
				moveX();
				break;
			}
			checkX[4] = 1;
			gotoxy(9, 6);
			setColor(x_Color);
			std::cout << X_Skin;
			break;
		case 6:
			if (check[5] == 1 || checkBot[5] == 1 || checkX[5] == 1)
			{
				moveX();
				break;
			}
			checkX[5] = 1;
			gotoxy(15, 6);
			setColor(x_Color);
			std::cout << X_Skin;
			break;
		case 7:
			if (check[6] == 1 || checkBot[6] == 1 || checkX[6] == 1)
			{
				moveX();
				break;
			}
			checkX[6] = 1;
			gotoxy(3, 10);
			setColor(x_Color);
			std::cout << X_Skin;
			break;
		case 8:
			if (check[7] == 1 || checkBot[7] == 1 || checkX[7] == 1)
			{
				moveX();
				break;
			}
			checkX[7] = 1;
			gotoxy(9, 10);
			setColor(x_Color);
			std::cout << X_Skin;
			break;
		case 9:
			if (check[8] == 1 || checkBot[8] == 1 || checkX[8] == 1)
			{
				moveX();
				break;
			}
			checkX[8] = 1;
			gotoxy(15, 10);
			setColor(x_Color);
			std::cout << X_Skin;
			break;
		default:
			moveX();
			break;
		}

	}
	void drawY() {
		switch (y)
		{
		case 1:
			if (checkX[0] == 1 || check[0] == 1)
			{
				moveY();
				break;
			}
			check[0] = 1;
			gotoxy(3, 2);
			setColor(o_Color);
			std::cout << O_Skin;
			break;
		case 2:
			if (checkX[1] == 1 || check[1] == 1)
			{
				moveY();
				break;
			}
			check[1] = 1;
			gotoxy(9, 2);
			setColor(o_Color);
			std::cout << O_Skin;
			break;
		case 3:
			if (checkX[2] == 1 || check[2] == 1)
			{
				moveY();
				break;
			}
			check[2] = 1;
			gotoxy(15, 2);
			setColor(o_Color);
			std::cout << O_Skin;
			break;
		case 4:
			if (checkX[3] == 1 || check[3] == 1)
			{
				moveY();
				break;
			}
			check[3] = 1;
			gotoxy(3, 6);
			setColor(o_Color);
			std::cout << O_Skin;
			break;
		case 5:
			if (checkX[4] == 1 || check[4] == 1)
			{
				moveY();
				break;
			}
			check[4] = 1;
			gotoxy(9, 6);
			setColor(o_Color);
			std::cout << O_Skin;
			break;
		case 6:
			if (checkX[5] == 1 || check[5] == 1)
			{
				moveY();
				break;
			}
			check[5] = 1;
			gotoxy(15, 6);
			setColor(o_Color);
			std::cout << O_Skin;
			break;
		case 7:
			if (checkX[6] == 1 || check[6] == 1)
			{
				moveY();
				break;
			}
			check[6] = 1;
			gotoxy(3, 10);
			setColor(o_Color);
			std::cout << O_Skin;
			break;
		case 8:
			if (checkX[7] == 1 || check[7] == 1)
			{
				moveY();
				break;
			}
			check[7] = 1;
			gotoxy(9, 10);
			setColor(o_Color);
			std::cout << O_Skin;
			break;
		case 9:
			if (checkX[8] == 1 || check[8] == 1)
			{
				moveY();
				break;
			}
			check[8] = 1;
			gotoxy(15, 10);
			setColor(o_Color);
			std::cout << O_Skin;
			break;
		default:
			moveY();
			break;
		}
	}

	void moveX() {
		gotoxy(30, 2);
		std::cout << "                ";
		setColor(7);
		gotoxy(21, 2);
		std::cout << "Игрок 1: ";
		std::cin >> x;
		drawX();

	}
	void moveY() {
		gotoxy(30, 3);
		std::cout << "                    ";
		setColor(7);
		gotoxy(21, 3);
		std::cout << "Игрок 2: ";
		std::cin >> y;
		drawY();
	}

	bool checkWin(int k) {
		if (checkX[0] == 1 && checkX[1] == 1 && checkX[2] == 1)
		{
			whoWin = 1;
			return true;
		}
		else if (checkX[3] == 1 && checkX[4] == 1 && checkX[5] == 1)
		{
			whoWin = 1;
			return true;
		}
		else if (checkX[6] == 1 && checkX[7] == 1 && checkX[8] == 1)
		{
			whoWin = 1;
			return true;
		}
		else if (checkX[0] == 1 && checkX[3] == 1 && checkX[6] == 1)
		{
			whoWin = 1;
			return true;
		}
		else if (checkX[1] == 1 && checkX[4] == 1 && checkX[7] == 1)
		{
			whoWin = 1;
			return true;
		}
		else if (checkX[2] == 1 && checkX[5] == 1 && checkX[8] == 1)
		{
			whoWin = 1;
			return true;
		}
		else if (checkX[0] == 1 && checkX[4] == 1 && checkX[8] == 1)
		{
			whoWin = 1;
			return true;
		}
		else if (checkX[2] == 1 && checkX[4] == 1 && checkX[6] == 1)
		{
			whoWin = 1;
			return true;
		}
		else if (check[0] == 1 && check[1] == 1 && check[2] == 1)
		{
			whoWin = 2;
			return true;
		}
		else if (check[3] == 1 && check[4] == 1 && check[5] == 1)
		{
			whoWin = 2;
			return true;
		}
		else if (check[6] == 1 && check[7] == 1 && check[8] == 1)
		{
			whoWin = 2;
			return true;
		}
		else if (check[0] == 1 && check[3] == 1 && check[6] == 1)
		{
			whoWin = 2;
			return true;
		}
		else if (check[1] == 1 && check[4] == 1 && check[7] == 1)
		{
			whoWin = 2;
			return true;
		}
		else if (check[2] == 1 && check[5] == 1 && check[8] == 1)
		{
			whoWin = 2;
			return true;
		}
		else if (check[0] == 1 && check[4] == 1 && check[8] == 1)
		{
			whoWin = 2;
			return true;
		}
		else if (check[2] == 1 && check[4] == 1 && check[6] == 1)
		{
			whoWin = 2;
			return true;
		}
		else if (checkBot[0] == 1 && checkBot[1] == 1 && checkBot[2] == 1)
		{
			whoWin = 3;
			return true;
		}
		else if (checkBot[3] == 1 && checkBot[4] == 1 && checkBot[5] == 1)
		{
			whoWin = 3;
			return true;
		}
		else if (checkBot[6] == 1 && checkBot[7] == 1 && checkBot[8] == 1)
		{
			whoWin = 3;
			return true;
		}
		else if (checkBot[0] == 1 && checkBot[3] == 1 && checkBot[6] == 1)
		{
			whoWin = 3;
			return true;
		}
		else if (checkBot[1] == 1 && checkBot[4] == 1 && checkBot[7] == 1)
		{
			whoWin = 3;
			return true;
		}
		else if (checkBot[2] == 1 && checkBot[5] == 1 && checkBot[8] == 1)
		{
			whoWin = 3;
			return true;
		}
		else if (checkBot[0] == 1 && checkBot[4] == 1 && checkBot[8] == 1)
		{
			whoWin = 3;
			return true;
		}
		else if (checkBot[2] == 1 && checkBot[4] == 1 && checkBot[6] == 1)
		{
			whoWin = 3;
			return true;
		}
		else if (k == 10)
		{
			whoWin = 4;
			return true;
		}
		else
		{
			return false;
		}

	}

	void player1Win() {
		CLEAR;
		setColor(x_Color);
		for (int i = 0; i < SHOWWINNER; i++)
		{
			std::cout << player1[i] << "\n";
		}
		system("pause");
	}

	void player2Win() {
		CLEAR;
		setColor(o_Color);
		for (int i = 0; i < SHOWWINNER; i++)
		{
			std::cout << player2[i] << "\n";
		}
		system("pause");
	}

	void drawP() {
		CLEAR;
		setColor(o_Color);
		for (int i = 0; i < 4; i++)
		{
			std::cout << draw[i] << "\n";
		}
		setColor(x_Color);
		for (int j = 4; j < 7; j++)
		{
			std::cout << draw[j] << "\n";
		}
		system("pause");
	}

	void botWin() {
		CLEAR;
		for (int i = 0; i < SHOWWINNER; i++)
		{
			std::cout << bot[i] << "\n";
		}
		system("pause");
	}

	void drawBot() {
		switch (b)
		{
		case 1:
			if (checkX[0] == 1 || checkBot[0] == 1)
			{
				moveBot();
				break;
			}
			checkBot[0] = 1;
			setColor(5);
			gotoxy(3, 2);
			std::cout << bot_skin;
			break;
		case 2:
			if (checkX[1] == 1 || checkBot[1] == 1)
			{
				moveBot();
				break;
			}
			checkBot[1] = 1;
			setColor(5);
			gotoxy(9, 2);
			std::cout << bot_skin;
			break;
		case 3:
			if (checkX[2] == 1 || checkBot[2] == 1)
			{
				moveBot();
				break;
			}
			checkBot[2] = 1;
			setColor(5);
			gotoxy(15, 2);
			std::cout << bot_skin;
			break;
		case 4:
			if (checkX[3] == 1 || checkBot[3] == 1)
			{
				moveBot();
				break;
			}
			checkBot[3] = 1;
			setColor(5);
			gotoxy(3, 6);
			std::cout << bot_skin;
			break;
		case 5:
			if (checkX[4] == 1 || checkBot[4] == 1)
			{
				moveBot();
				break;
			}
			checkBot[4] = 1;
			setColor(5);
			gotoxy(9, 6);
			std::cout << bot_skin;
			break;
		case 6:
			if (checkX[5] == 1 || checkBot[5] == 1)
			{
				moveBot();
				break;
			}
			checkBot[5] = 1;
			setColor(5);
			gotoxy(15, 6);
			std::cout << bot_skin;
			break;
		case 7:
			if (checkX[6] == 1 || checkBot[6] == 1)
			{
				moveBot();
				break;
			}
			checkBot[6] = 1;
			setColor(5);
			gotoxy(3, 10);
			std::cout << bot_skin;
			break;
		case 8:
			if (checkX[7] == 1 || checkBot[7] == 1)
			{
				moveBot();
				break;
			}
			checkBot[7] = 1;
			setColor(5);
			gotoxy(9, 10);
			std::cout << bot_skin;
			break;
		case 9:
			if (checkX[8] == 1 || checkBot[8] == 1)
			{
				moveBot();
				break;
			}
			checkBot[8] = 1;
			setColor(5);
			gotoxy(15, 10);
			std::cout << bot_skin;
			break;
		default:
			break;
		}

	}

	void moveBot() {
		b = 1 + rand() % 9;
		drawBot();
	}



private:
	char X_Skin = 'X';
	char O_Skin = 'O';
	char map_Skin = '#';

	int size = 10;

	int checkX[9] = {
		0, 0, 0,
		0, 0, 0,
		0, 0, 0
	};
	int check[9] = {
		0, 0, 0,
		0, 0, 0,
		0, 0, 0
	};

	short whoWin = 0;

	int menu_Color = 7;
	int x_Color = 7;
	int o_Color = 7;
	int map_Color = 7;

	int x = 0;
	int y = 0;

	int b = 0;
	int checkBot[9] = {
		0, 0, 0,
		0, 0, 0,
		0, 0, 0
	};
	char bot_skin = 'O';



	std::string player1[7] = {
		"########  ##          ###    ##    ## ######## ########        ##      ##      ## #### ##    ##",
		"##     ## ##         ## ##    ##  ##  ##       ##     ##     ####      ##  ##  ##  ##  ###   ##",
		"##     ## ##        ##   ##    ####   ##       ##     ##       ##      ##  ##  ##  ##  ####  ##",
		"########  ##       ##     ##    ##    ######   ########        ##      ##  ##  ##  ##  ## ## ##",
		"##        ##       #########    ##    ##       ##   ##         ##      ##  ##  ##  ##  ##  ####",
		"##        ##       ##     ##    ##    ##       ##    ##        ##      ##  ##  ##  ##  ##   ###",
		"##        ######## ##     ##    ##    ######## ##     ##     ######     ###  ###  #### ##    ##"
	};
	std::string player2[7] = {
		"########  ##          ###    ##    ## ######## ########      #######     ##      ## #### ##    ##",
		"##     ## ##         ## ##    ##  ##  ##       ##     ##    ##     ##    ##  ##  ##  ##  ###   ##",
		"##     ## ##        ##   ##    ####   ##       ##     ##           ##    ##  ##  ##  ##  ####  ##",
		"########  ##       ##     ##    ##    ######   ########      #######     ##  ##  ##  ##  ## ## ##",
		"##        ##       #########    ##    ##       ##   ##      ##           ##  ##  ##  ##  ##  ####",
		"##        ##       ##     ##    ##    ##       ##    ##     ##           ##  ##  ##  ##  ##   ###",
		"##        ######## ##     ##    ##    ######## ##     ##    #########     ###  ###  #### ##    ##"

	};
	std::string draw[7] = {
		"########  ########     ###    ##      ##",
		"##     ## ##     ##   ## ##   ##  ##  ##",
		"##     ## ##     ##  ##   ##  ##  ##  ##",
		"##     ## ########  ##     ## ##  ##  ##",
		"##     ## ##   ##   ######### ##  ##  ##",
		"##     ## ##    ##  ##     ## ##  ##  ##",
		"########  ##     ## ##     ##  ###  ### "


	};
	std::string bot[7] = {
		"########   #######  ########    ##      ## #### ##    ##",
		"##     ## ##     ##    ##       ##  ##  ##  ##  ###   ##",
		"##     ## ##     ##    ##       ##  ##  ##  ##  ####  ##",
		"########  ##     ##    ##       ##  ##  ##  ##  ## ## ##",
		"##     ## ##     ##    ##       ##  ##  ##  ##  ##  ####",
		"##     ## ##     ##    ##       ##  ##  ##  ##  ##   ###",
		"########   #######     ##        ###  ###  #### ##    ##"

	};

	const int SHOWWINNER = 7;

	void restartGame() {
		for (int i = 0; i < 9; i++)
		{
			checkX[i] = 0;
		}
		for (int i = 0; i < 9; i++)
		{
			check[i] = 0;
		}
		for (int i = 0; i < 9; i++)
		{
			checkBot[i] = 0;
		}
	}

	void setColor(int id) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), id);
	}

};











int main() {
	setlocale(0, "");
	srand(time(0));


	cGame game;
	game.menu();




	return 0;
}