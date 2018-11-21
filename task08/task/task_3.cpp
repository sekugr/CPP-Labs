
#include "stdafx.h"
#include "task.h"

bool f_exit(char *str)
{
	char *otv = strstr(str, "пока");
	if (otv != NULL)
	{
		cout << "Аривидерчи!\n\n";
		return true;
	}
		
	else
	{
		return false;
	}

	
}

void task_3()
{
	cout << "Задание 8.3" << endl;
	char str[255];
	char* otv = NULL;
	cout << "Приветствую тебя пользователь!\nПоговори со мной\n";
	clr_cin;
	
	cin.getline(str, 255);

	while (!f_exit(str))
	{
		otv = strstr(str, "прив");
		if (otv != NULL)
			//cout << *otv << endl;
			puts("Привет");

		otv = strstr(str, "здрав");
		if (otv != NULL)
			//cout << *otv << endl;
			puts("Привет");

		otv = strstr(str, "час");
		if (otv != NULL)
		{
			time_t t = time(0);   // get time now
			struct tm * now = localtime(&t);
			//cout << (now->tm_mday) << '-' << (now->tm_mon + 1) << '-' << now->tm_year + 1900 << endl;
			cout << now->tm_hour << ":" << now->tm_min << endl;
		}
		otv = strstr(str, "врем");
		if (otv != NULL)
		{
			time_t t = time(0);   // get time now
			struct tm * now = localtime(&t);
			//cout << (now->tm_mday) << '-' << (now->tm_mon + 1) << '-' << now->tm_year + 1900 << endl;
			cout << now->tm_hour << ":" << now->tm_min << endl;
		}
		cout << "Продолжим разговор?\n";
		clr_cin;

		cin.getline(str, 255);
	}
	
	//else cout << "не найдено\n";
}