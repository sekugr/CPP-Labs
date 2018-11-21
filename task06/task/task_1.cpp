#include "stdafx.h"
#include <iostream>  // cout, cin ...
#include "task.h"

using namespace std;

void task_1()
{
	system("cls");
	
	int* size = new int; // длина вводимого массива
		
	cout << "«адание 6.1, отделение четных от не четных" << endl;
	cout << "¬ведите количество чисел в массиве" << endl;
	cin >> *size;

	int* massiv = new int[*size];	// исходный массив
	int* tm = massiv;				// переменна€ дл€ хранени€ адреса начала массива
	int* chet = new int[*size];		// четные числа
	int* tch = chet;				// переменна€ дл€ хранени€ адреса начала массива
	int* nechet = new int[*size];	// не четные числа
	int* tnch = nechet;				// переменна€ дл€ хранени€ адреса начала массива

	cout << endl;

	cout << "¬ведите числа в массив" << endl;
	while (tm < (massiv + *size))
	{
		cin >> *tm; // ввод элемента массива
		if (*tm % 2 == 0)	// определение четности
		{
			*tch = *tm;
			*tch++;
		}
		else
		{
			*tnch = *tm;
			*tnch++;
		}
		*tm++;
	}

	// вывод массивов
	cout << endl << "»сходный массив " ;
	print_mas(massiv, massiv + *size);

	cout << endl << "„етный массив " ;
	print_mas(chet, tch);

	cout << endl << "Ќе четный массив ";
	print_mas(nechet, tnch);

	delete[] massiv;
	delete[] chet;
	delete[] nechet;
	delete size;


	

	cout << endl;
	
}
