#include "stdafx.h"
#include <iostream>  // cout, cin ...

using namespace std;

void sdvig(int *massiv_pos, int *massiv_end)
{
	for (int* i = massiv_pos; i < (massiv_end); *i++)
	{
		*i = *(i + 1);
	}
}
void print_mas(int* mas, int* adr_end_mas)
{
	cout << endl << "Вывод массива: " << endl;
	while (mas <  adr_end_mas)
	{
		cout << *mas++ << " ";
	}
	cout << endl;
}