// task.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <locale.h>
#include "task.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);// установка кодовой страницы win-cp 1251 в поток вывода
		
	char number = 0;
	do
	{
		cout << "Задание 8" << endl;
		cout << "Выберите номер задания (1, 2, 3) ВЫХОД - 0"<< endl;
		cin >> number;
		
		system("cls");
		clr_cin();
		switch (number)
		{
		case '1': task_1(); break;
		case '2': task_2(); break;
		case '3': task_3(); break;
		default: break;
		}
	} while (number != '0');



}