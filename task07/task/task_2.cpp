#pragma once

#include "stdafx.h"
#include "task.h"



void task_2()
{
	cout << "Задание 7.2" << endl;


	int k, n, pos_s;
	char s[] = "Пример вставки подстроки, в исходную строку.";
	char s1[] = " в определенную позицию,";
	cout <<endl<< "СТРОКА: "<< s << endl <<"ПОДСТРОКА: "<< s1 << endl;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ',')pos_s = i;
	}
	cout << endl<< "РЕЗУЛЬТАТ: " << str_in_str(s, s1, pos_s) << endl << endl;
}