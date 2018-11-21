#pragma once

#include "stdafx.h"
#include "task.h"
#include <queue>
#include <deque>
#include <string>

bool isaction(char ch)
{
	switch (ch)
	{
		case '+': return true; break;
		case '-': return true; break;
		case '*': return true; break;
		case '/': return true; break;
		default: return false;
		break;
	}
}
double calc(double val1, double val2, char oper)
{
	if (oper == '+')
	{
		return val1 + val2;
	}
	else
	{
		if (oper == '*')
		{
			return val1 * val2;
		}
		else
		{
			if (oper == '-')
			{
				return val1 - val2;
			}
			else
			{
				if (oper == '/')
				{
					return val1 / val2;
				}
				else return 0;
			}

		}
		
		
	}
}



void task_2()
{
	setlocale(LC_ALL, "rus");
	deque<char> operations;
	deque<float> values;
	string str;
	string tmp;
	double num;
	cout << "Задание 10.2\n";
	cout << "Введите значения и действия " << endl;
	getline(cin, str);
	int str_len = str.size();

	for (int i = 0; i < str.size(); ++i)
	{
		if ((isaction(str[i]))||(i == (str.size())))
		{
			num = stod(tmp);
		//	cout << num << endl;
			values.push_front(num);
			tmp.clear();
			operations.push_front(str[i]);
		//	cout << str[i] << endl;
		}
		else
		{
			tmp +=  str[i];
		}
	}
	num = stof(tmp);
	cout << "Расчеты" << endl;
	//cout << num << endl;
	values.push_front(num);
	tmp.clear();
	//cout << endl;
	num = values[values.size()-1];
	for (int i = 0; i < operations.size(); ++i)
	{
		cout << num ;
		cout << operations[operations.size() - i-1] ;
		cout << values[operations.size()-i-1] <<"=";
		num = calc(num, values[operations.size() - i - 1], operations[operations.size() - i - 1]);
		cout << num << endl;
	}
}