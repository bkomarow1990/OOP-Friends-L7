#include "Menu.h"

void printMenu()
{
	cout << "================================" << endl;
	cout << "1. Print" << endl;
	cout << "2. Set new at new TV for remote" << endl;
	cout << "3. Power" << endl;
	cout << "4. Next Channel" << endl;
	cout << "5. Go to Channel" << endl;
	cout << "6. Inc Volume" << endl;
	cout << "7. Dec Volume" << endl;
	cout << "0. Exit" << endl;
	cout << "================================" << endl;
}

void menu(Remote & remote, TV * tv)
{
	bool exit = false;
	size_t choice = 0;
	while (exit!=true)
	{
		printMenu();
		cin >> choice;
		switch (choice)
		{
		case 0:
			break;
		case 1:
			tv->print();
			break;
		case 2:
			remote.setNewTV(tv);
			break;
		case 3:
			tv->power();
			break;
		case 4:
			tv->nextChanenel();
			break;
		case 5:
			size_t ch;
			cout << "Enter Channel number: " << endl;
			cin >> ch;
			remote.goToChannel(ch);
			break;
		case 6:
			tv->incVolume();
			break;
		case 7:
			tv->degVolume();
			break;
		default:
			break;
		}
	}
}
