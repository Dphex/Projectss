#include<iostream>
#include<Windows.h>
#include<conio.h>


void CursoreVisibale(bool visible, DWORD size) {
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &lpCursor);
}


int main() {

	setlocale(0, "");
	CursoreVisibale(false, 10);

	int arr1[10]{
		1,2,3,4,5,6,7,8,9,10
	};
	double arr2[10]{
		11,12,13,14,15,16,17,18,19,20
	};
	float arr3[10]{

		21,22,23,24,25,26,27,28,29,30
	};
	long arr4[10]{
		31,32,33,34,35,36,37,38,39,40
	};
	short arr5[10]{
		41,42,43,44,45,46,47,48,49,50
	};
	char arr6[10]{
		'@','#','$','%','^','*','/','\\','}','{'
	};
	std::string arr7[10]{
		"xx1","xx2","xx3","xx4","xx5","xx6","xx7","xx8","xx9","xx10"
	};
	bool arr8[10]{
		0,1,0,true,1,false,0,true,0,false
	};


	std::cout << "[+]Какой массив вывести?\n";
	std::cout << "[1]INT\n";
	std::cout << "[2]DOUBLE\n";
	std::cout << "[3]FLOAT\n";
	std::cout << "[4]LONG\n";
	std::cout << "[5]SHORT\n";
	std::cout << "[6]CHAR\n";
	std::cout << "[7]STRING\n";
	std::cout << "[8]BOOL\n";
	const int SIZE = 10;



	switch (_getch())
	{
	case '1':
		system("cls");
		for (int i = 0; i < SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "\t\t[+] Массив INT:\n\n";
			}
				std::cout << "\t\t[+] arrInt[" << i + 1 << "] = " << arr1[i] << "\n";
		}

		break;

	case '2':
		system("cls");
		for (int i = 0; i < SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "\t\t[+] Массив DOUBLE\n\n";
			}
			std::cout << "\t\t[+] arrDouble[" << i + 1 << "] = " << arr2[i] << "\n";
		}
		break;
		system("cls");
	case '3':
		for (int i = 0; i < SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "\t\t[+] Массив FLOAT:\n\n";
			}
			std::cout << "\t\t[+] arrFloat[" << i + 1 << "] = " << arr3[i] << "\n";
		}
		break;
	case '4':
		system("cls");
		for (int i = 0; i < SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "\t\t[+] Массив LONG:\n\n";
			}
			std::cout << "\t\t[+] arrLong[" << i + 1 << "] = " << arr4[i] << "\n";
		}
		break;
	case '5':
		system("cls");
		for (int i = 0; i < SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "\t\t[+] Массив SHORT:\n\n";
			}
			std::cout << "\t\t[+] arrShort[" << i + 1 << "] = " << arr5[i] << "\n";
		}
		break;
	case '6':
		system("cls");
		for (int i = 0; i < SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "\t\t[+] Массив CHAR\n\n";
			}
			std::cout << "\t\t[+] arrChar[" << i + 1 << "] = " << arr6[i] << "\n";
		}
		break;
	case '7':
		system("cls");
		for (int i = 0; i < SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "\t\t[+] Массив STRING\n\n";
			}
			std::cout << "\t\t[+] arrString[" << i + 1 << "] = " << arr7[i] << "\n";
		}
		break;
	case '8':
		system("cls");
		for (int i = 0; i < SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "\t\t[+] Массив BOOL\n\n";
			}
			std::cout << "\t\t[+] arrBool[" << i + 1 << "] = " << arr8[i] << "\n";
		}
		break;
	default:
		break;
	}

	system("pause");

	return 0;
}