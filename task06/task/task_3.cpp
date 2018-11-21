#include "stdafx.h"
#include <iostream>  // cout, cin ...
#include "task.h"

using namespace std;

void task_3()
{
	system("cls");
	
	cout << "Задание 6.3" << endl << "Массив из 100 случайных чисел от -50 до 50" << endl;
	srand(time(0));
	int* sz = new int;	*sz = 100;

	int* mas = new int[*sz]; //массив случайных чисел

		for (int* i = mas; i < (mas + *sz); i++) // заполняем массив
		{
			*i = (rand() % 100) - 50;
		}
	
	cout << "Исходный массив" << endl;
	print_mas(mas, (mas + *sz)); // вывод массива случайных чисел
	cout << endl;
	// поиск последовательностей и удаление значений со сдвигом массива
	for (int* pos_start = mas; pos_start < (mas + *sz); pos_start++)
	{
		if (*pos_start < 0)
		{
			for (int* pos_end = pos_start; pos_end < (mas + *sz); pos_end++)
			{
				if ((*(pos_end + 1) >= 0) || (pos_end == (mas + *sz - 1)))
				{
					//cout << "start " << *pos_start << " end " << *pos_end ;
					if ((pos_end - pos_start) > 0)
					{
						int* sum = new int; *sum = 0;
						for (int* n = pos_start; n < pos_end + 1; n++) *sum += abs(*n);
						*sum = (*sum / (1+(pos_end - pos_start)));
						//cout << " sum / cout" << *sum;
						for (int* n = pos_start; n < pos_end + 1; n++)
						{
							if (abs(*n) > *sum)
							{
								sdvig(n, mas + *sz);// функция сдвига массива func.cpp
								*sz -= 1;
								n--;
								pos_end--;
							}
						}
						delete sum;
						break;
					}
					pos_start = pos_end;
					break;
				}
			}
		}
	}
	cout << "Во  всех  последовательностях  отрицательных  чисел удалите  элементы, абсолютное  значение  которых  превышает  абсолютное среднее значение для этой последовательности." << endl;
	print_mas(mas, mas + *sz);
	delete sz;
	delete[] mas;
}
