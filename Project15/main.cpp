#include<iostream>
#include<Windows.h>





int main() {
	setlocale(0, "");

	int choose;

	const int ARR = 15;
	const int SIZE = 15;

	const int ARR1 = 20;
	const int SIZE1 = 20;

	const int ARR2 = 30;
	const int SIZE2 = 30;

	int arr[ARR][SIZE] = {
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1}, //
		{1,1,1,1,1,0,0,0,0,1,1,1,1,1,1},
		{1,1,1,1,1,0,0,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,0,0,0,1,1,1,1,1,1,1},
		{1,1,1,1,1,0,0,0,0,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1},
		{1,1,1,1,0,0,0,0,0,0,0,0,1,1,1},
		{1,1,1,1,0,1,1,1,1,1,1,0,1,1,1},
		{1,1,1,1,0,1,1,1,1,1,1,0,1,1,1},
		{1,1,1,1,0,1,1,1,1,1,1,0,1,1,1}

	};
	int arr1[ARR1][SIZE1] = {
		{1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1},
		{1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
		{1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1},
		{1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,1,1,1}, //
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1},
		{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,1,1},
		{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1}

	};

	int arr2[ARR2][SIZE2] = {
		{1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,0,0,0,0,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,0,1,1},
		{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,0,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,0,1,1},
		{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,0,1,1,1,0,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,0,1,1,1,0,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,0,0,1,1,0,0,1,1},
		{1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1}
	};

	std::cout << "[+]Программа - \"Лабиринт\"\n\n";

	std::cout << "[+]Размер карты: \n\n";

	std::cout << "[1]15 x 15\n";
	std::cout << "[2]20 x 20\n";
	std::cout << "[3]30 x 30\n\n";

	std::cout << "[+]Выберите размер: ";
	std::cin >> choose;

	if (choose == 1) {
		system("cls");
		for (int i = 0; i < ARR; i++)
		{
			for (int k = 0; k < SIZE; k++)
			{
				if (arr[i][k] == 1)
				{
					std::cout << "# ";
				}
				else {
					std::cout << "  ";
				}
			}
			std::cout << std::endl;
		}
	}


	if (choose == 2) {
		system("cls");
		for (int i = 0; i < ARR1; i++)
		{
			for (int k = 0; k < SIZE1; k++)
			{
				if (arr1[i][k] == 1)
				{
					std::cout << "# ";
				}
				else {
					std::cout << "  ";
				}
			}
			std::cout << std::endl;
		}

	}

	if (choose == 3)
	{
		system("cls");
		for (int i = 0; i < ARR2; i++)
		{
			for (int k = 0; k < SIZE2; k++)
			{
				if (arr2[i][k] == 1)
				{
					std::cout << "# ";
				}
				else {
					std::cout << "  ";
				}
			}
			std::cout << std::endl;
		}

	}


}