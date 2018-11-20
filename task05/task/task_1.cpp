

#include "stdafx.h"
//#include <pch.h>
#include <locale.h>
#include <iostream>  // cout, cin ...
#include "task.h"
using namespace std;

void task_1()
{
	int a[50];
	int l[50];
	int m[50];
	int size, li = 0, mi = 0;
	size = 5;
	
	cout << "Задание 1" << endl;
	cout << "Введите количество чисел в массиве" << endl;
	cin >> size;
	cout << endl;
	cout << "Введите числа в массив" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
		if ((a[i] % 2) == 0)
		{
			l[li] = a[i];// отбор четных
			li++;
		}
		else
		{
			m[mi] = a[i];// отбор нечетных
			mi++;
		}
	}

	// вывод массивов
	cout << " Исходный массив: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i]<< " " ;
	}
	cout << endl;
	cout << " Чётные числа: " << endl;
	for (int i = 0; i < li; i++)
	{
		cout << l[i] << " ";
	}
	cout << endl;
	cout << " Нечётные числа: " << endl;
	for (int i = 0; i < mi; i++)
	{
		cout << m[i] << " ";
	}
	cout << endl;
}
