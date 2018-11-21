#include "stdafx.h"
#include <iostream>  // cout, cin ...
#include "task.h"

using namespace std;

void task_2()
{
	system("cls");
	cout << "«адание 6.2" << endl << "ћассив из N чисел выбранных рандомом";
	cout << endl << "¬ведие N" << endl;
		
	int* sz = new int; // размер массива
	cin >> *sz ;
	int* rm = new int[*sz]; // массив случайных чисел
	
	// заполн€ем массив
	srand(time(0));
	for (int* n = rm; n < (rm + *sz); n++)
	{
		*n = (rand() % 40) - 20;
	}

	print_mas(rm, (rm + *sz));

	cout << "«начени€ больше 8, удалены";
	int* trm = rm; // запоминаем начало массива
	int *b8, *b81;// адреса чисел больше 8 и следующего за ним

	while (trm < (rm + *sz))
	{
		if (*trm > 8)
		{
			b8 = trm;
			b81 = b8;
			while (b8 < (rm + *sz))
			{
				b81++;
				*b8 = *b81;
				b8++;
			}
			*sz = *sz -1;
		}
		else	trm++;
	}
	print_mas(rm, (rm + *sz));
	cout << "ƒополнительно! ≈сли есть отрицательное число, такое же по модулю как и положительное, оно заменено на 0" ;
	for (int* n = rm; n < (rm + *sz); n++)
	{
		if (*n > 0)
		{
			for (int* k = rm; k < (rm + *sz); k++)
			{
				if (*n == (*k)*-1) *k = 0;
			}
		}
	}
	print_mas(rm, (rm + *sz));
	cout << endl << endl << endl;
	
	// старое решение
	int a[20];
	int size = sizeof(a) / sizeof(int);
	cout << "–ешение без указателей"<< endl<<"ћассив 20 случайных чисел" ;
	for (int i = 0; i < size; i++)
	{
		a[i] = (rand() % 40) - 20;
	}
	print_mas(a, a + size);
	// убираем числа больше 8
	cout << "≈сли значение больше 8, оно - удалено" ;
	int n = 0;
	while (n < size)
	{
		if (a[n] > 8)
		{
			for (int z = n; z < size; z++)
			{
				a[z] = a[z + 1];
			}
			size--;
		}
		else n++;
	}
	print_mas(a, a + size);

	cout << "ƒополнительно" << endl<< "≈сли есть отрицательное число, такое же по модулю как и положительное, оно заменено на 0"<< endl;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > 0)
		{
			int c = a[i];
			for (int n = 0; n < size; n++) 
			{
				
				if ((a[n]) == (-1 * c)) {
					a[n] = 0;
				}
			}
		}
			
		cout << a[i] << " ";
	}
	cout << endl<< endl;

}