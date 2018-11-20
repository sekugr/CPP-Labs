#include "stdafx.h"
//#include <pch.h>
#include <locale.h>
#include <iostream>  // cout, cin ...
#include "task.h"
#include <ctime>
#include <cmath>
using namespace std;


void task_3()
{
	cout << "Задание 3" << endl << "Массив из 100 случайных чисел от -50 до 50"<< endl;
	srand(time(0));
	int a[100], ap[100];
	int np = 0, kp = 0;
	bool flag = false;
	for (int i = 0; i < 100; i++)
	{
		a[i] = (rand() % 100) - 50;
		cout << a[i] << " ";
		if (i%20 ==19) cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 100; i++)
	{
		if ((a[i] < 0)&& (a[i+1]<0)&&(!flag))
		{
			flag = true;
			np = i;// начало последовательности
		}
		if ((a[i] >= 0)&& flag)
		{
		//	cout << endl;
			flag = false;
			kp = i; // конец последовательности
			int sum = 0;// сумма последовательности
			float sr = 0; // среднее последовательности
			for (int q = np; q < kp; q++)
			{
				sum -= a[q];
			}
			sr = sum / (kp - np);
			for (int q = np; q < kp; q++)
			{
				if (a[q] < (-1*sr)) a[q] = 0;
			}
		}
				
	}
	cout << endl << "Во всех последовательностях (больше 1 го числа подряд) отрицательных чисел элементы, абсолютное значение которых превышает абсолютное среднее значение для этой последовательности, заменены на 0." << endl;
	for (int i = 0; i < 100; i++)
	{
		cout << a[i] << " ";
		if (i % 20 == 19) cout << endl;
	}
	cout << endl;

}