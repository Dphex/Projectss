#include<iostream>
#include<Windows.h>


//[1]clear
void clearConsole() {
	system("cls");
}

//[2]background
void setConsoleBackground(int id) {
	if (id == 1)
		system("color 17"); //Siniy
	if (id == 2)
		system("color 27"); //Zeleniy
	if (id == 3)
		system("color 47"); //Red
	if (id == 4)
		system("color 57"); //Liloviy
	if (id == 5)
		system("color 67"); //Zheltiy
}


//text color
void setTextColor(int id) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), id);
}

//sizes
int getIntSize() {
	return sizeof(int);
}

int getCharSize() {
	return sizeof(char);
}

double getDoubleSize() {
	return sizeof(double);
}

float getFloatSize() {
	return sizeof(float);
}

bool getBoolSize() {
	return sizeof(bool);
}


//Hello
std::string WassUp() {
	return "Hello I am function =)";
}

//square 5x5
void showSquare() {
	const int size = 5;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
		{
			std::cout << "# ";
		}
		std::cout << std::endl;
	}
}

int main() {
	while (true)
	{
		clearConsole();

		int choose = 0;

		std::cout << "[+]Functions\n\n";

		std::cout << "[1] Clear console\n";
		std::cout << "[2] Change background color\n";
		std::cout << "[3] Change text color\n";
		std::cout << "[4] INT size\n";
		std::cout << "[5] CHAR size\n";
		std::cout << "[6] DOUBLE size\n";
		std::cout << "[7] FLOAT size\n";
		std::cout << "[8] BOOL size\n";
		std::cout << "[9] Print secret text ;)\n";
		std::cout << "[10] Print square 5 X 5\n";

		std::cout << "[->] Enter your choice: ";
		std::cin >> choose;

		switch (choose)
		{
		case 1:
			clearConsole();
			break;
		case 2: {
			clearConsole();
			int colorId = 0;
			std::cout << "[+] Choose your color\n\n";
			std::cout << "[1] Blue\n";
			std::cout << "[2] Green\n";
			std::cout << "[3] Red\n";
			std::cout << "[4] Purple\n";
			std::cout << "[5] Yellow\n\n";

			std::cout << "[->] Enter your nubmer: ";
			std::cin >> colorId;

			switch (colorId)
			{
			case 1:
				setConsoleBackground(1);
				break;
			case 2:
				setConsoleBackground(2);
				break;
			case 3:
				setConsoleBackground(3);
				break;
			case 4:
				setConsoleBackground(4);
				break;
			case 5:
				setConsoleBackground(5);
				break;
			default:
				break;
			}
			break;
		}
		case 3: {
			int textColorId = 0;

			std::cout << "\nType number from 1 to 14: ";
			std::cin >> textColorId;

			setTextColor(textColorId);
			break;
		}
		case 4:
			std::cout << "\nINT size -> " << getIntSize();
			Sleep(1000);
			break;
		case 5:
			std::cout << "\nCHAR size -> " << getCharSize();
			Sleep(1000);
			break;
		case 6:
			std::cout << "\nDOUBLE size -> " << getDoubleSize();
			Sleep(1000);
			break;
		case 7:
			std::cout << "\nFLOAT size -> " << getFloatSize();
			Sleep(1000);
			break;
		case 8:
			std::cout << "\nBOOL size -> " << getBoolSize();
			Sleep(1000);
			break;
		case 9:
			std::cout << "\n" << WassUp() << "\n";
			system("pause");
			break;
		case 10:
			clearConsole();
			showSquare();
			system("pause");
			break;

		default:
			break;
		}
	}

	return 0;
}




//Обьявление функции 
//возвращение значение имя_функции(){
//
//
//
//return значение;
//}