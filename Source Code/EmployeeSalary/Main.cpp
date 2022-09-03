#include "Company.h"
#include<Windows.h>

int main()
{
	Company omega;
	while (true)
	{
		int key = 0;
		cout << "============================================== MENU ==============================================" << endl;
		cout << "Press 1: Print out all the employees' information and the final payment for each employee from FILE" << endl;
		cout << "Press 2: INPUT and print out all the employees' information and the final payment for each employee" << endl;
		cout << "Press the others keys to EXIT" << endl;
		cout << "Your choice: ";
		cin >> key;
		if (key == 1)
		{
			omega.read("November2021.txt");
			omega.output();
			
		}
		if (key == 2)
		{
			omega.input();
			omega.output();
		}
		else break;
	}
}