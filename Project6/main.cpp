#include<iostream>
#include<conio.h>
#include<windows.h>

#define clear system("cls")




int main()
{
	setlocale(0, "");
	std::string month[12] = { "Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь","Декабрь" };
	std::string monthGG[12] = { "Января","Февраля","Марта","Апреля","Мая","Июня","Июля","Августа","Сентября","Октября","Ноября","Декабря" };
	int day[31]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31 };
	std::cout << "[+]Календарь\n";
	std::cout << "[1]Январь\n";
	std::cout << "[2]Февраль\n";
	std::cout << "[3]Март\n";
	std::cout << "[4]Апрель\n";
	std::cout << "[5]Май\n";
	std::cout << "[6]Июнь\n";
	std::cout << "[7]Июль\n";
	std::cout << "[8]Август\n";
	std::cout << "[9]Сентябрь\n";
	std::cout << "[10]Октябрь\n";
	std::cout << "[11]Ноябрь\n";
	std::cout << "[12]Декабрь\n";

	std::cout << "[+]Выберите месяц:";
	int choose = 0;
	std::cin >> choose;
	switch (choose)
	{
	case 1:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	case 2:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	case 3:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	case 4:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	case 5:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	case 6:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	case 7:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	case 8:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	case 9:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	case 10:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	case 11:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	case 12:
		std::cout << "[+]Выбран месяц - \"" << month[choose - 1] << "\"\n";
		break;
	default:
		break;
	}
	std::cout << "[+]Выберите день месяца:";
	int choose1 = 0;
	std::cin >> choose1;
	switch (choose1)
	{
	case 1:
		std::cout << "[+]Календарь: " << day[0];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 2:
		std::cout << "[+]Календарь: " << day[1];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 3:
		std::cout << "[+]Календарь: " << day[2];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 4:
		std::cout << "[+]Календарь: " << day[3];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 5:
		std::cout << "[+]Календарь: " << day[4];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 6:
		std::cout << "[+]Календарь: " << day[5];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 7:
		std::cout << "[+]Календарь: " << day[6];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 8:
		std::cout << "[+]Календарь: " << day[7];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 9:
		std::cout << "[+]Календарь: " << day[8];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 10:
		std::cout << "[+]Календарь: " << day[9];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 11:
		std::cout << "[+]Календарь: " << day[10];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 12:
		std::cout << "[+]Календарь: " << day[11];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 13:
		std::cout << "[+]Календарь: " << day[12];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 14:
		std::cout << "[+]Календарь: " << day[13];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 15:
		std::cout << "[+]Календарь: " << day[14];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 16:
		std::cout << "[+]Календарь: " << day[15];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 17:
		std::cout << "[+]Календарь: " << day[16];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 18:
		std::cout << "[+]Календарь: " << day[17];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 19:
		std::cout << "[+]Календарь: " << day[18];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 20:
		std::cout << "[+]Календарь: " << day[19];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 21:
		std::cout << "[+]Календарь: " << day[20];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 22:
		std::cout << "[+]Календарь: " << day[21];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 23:
		std::cout << "[+]Календарь: " << day[22];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 24:
		std::cout << "[+]Календарь: " << day[23];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 25:
		std::cout << "[+]Календарь: " << day[24];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 26:
		std::cout << "[+]Календарь: " << day[25];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 27:
		std::cout << "[+]Календарь: " << day[26];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 28:
		std::cout << "[+]Календарь: " << day[27];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 29:
		std::cout << "[+]Календарь: " << day[28];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			break;
		}
		break;
	case 30:
		std::cout << "[+]Календарь: " << day[29];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 4:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 6:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 9:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 11:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			clear;
			std::cout << "Нет такого дня дурак!";
			Sleep(2000);
			clear;
			break;
		}
		break;
	case 31:
		std::cout << "[+]Календарь: " << day[30];
		switch (choose)
		{
		case 1:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 2:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 3:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 5:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 7:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 8:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 10:
			std::cout << " " << monthGG[choose - 1];
			break;
		case 12:
			std::cout << " " << monthGG[choose - 1];
			break;
		default:
			clear;
			std::cout << "Нет такого дня дурак!";
			Sleep(2000);
			clear;
			break;
		}
		break;
	default:
		break;
	}




	return 0;
}