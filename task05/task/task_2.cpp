

#include "stdafx.h"
//#include <pch.h>
#include <locale.h>
#include <iostream>  // cout, cin ...
#include "task.h"
#include <ctime>
#include <cmath>
using namespace std;


void task_2()
{
	cout << "«адание 2" << endl;
	srand(time(0));
	cout << endl;
	int a[30];
	int size = sizeof(a) / sizeof(int);

	for (int i = 0; i < size; i++)
	{
		a[i] = (rand() % 40) - 20;
		cout << a[i]<< " ";
	}
	cout << endl;
	cout <<"¬место значений больше 8 установлено -50" << endl;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > 8) a[i] = -50;
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "ƒополнительно" << endl<< "≈сли есть отрицательное число, такое же по модулю как и положительное, оно заменено на 0"<< endl;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > 0)
		{
			int c = a[i];
			for (int n = 0; n < size; n++) 
			{
				
				if ((a[n]) == (-1*c)) {
					a[n] = 0;
				}
			}
		}
			
		cout << a[i] << " ";
	}
	cout << endl<< endl;
}