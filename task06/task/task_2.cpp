#include "stdafx.h"
#include <iostream>  // cout, cin ...
#include "task.h"

using namespace std;

void task_2()
{
	system("cls");
	cout << "������� 6.2" << endl << "������ �� N ����� ��������� ��������";
	cout << endl << "������ N" << endl;
		
	int* sz = new int; // ������ �������
	cin >> *sz ;
	int* rm = new int[*sz]; // ������ ��������� �����
	
	// ��������� ������
	srand(time(0));
	for (int* n = rm; n < (rm + *sz); n++)
	{
		*n = (rand() % 40) - 20;
	}

	print_mas(rm, (rm + *sz));

	cout << "�������� ������ 8, �������";
	int* trm = rm; // ���������� ������ �������
	int *b8, *b81;// ������ ����� ������ 8 � ���������� �� ���

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
	cout << "�������������! ���� ���� ������������� �����, ����� �� �� ������ ��� � �������������, ��� �������� �� 0" ;
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
	
	// ������ �������
	int a[20];
	int size = sizeof(a) / sizeof(int);
	cout << "������� ��� ����������"<< endl<<"������ 20 ��������� �����" ;
	for (int i = 0; i < size; i++)
	{
		a[i] = (rand() % 40) - 20;
	}
	print_mas(a, a + size);
	// ������� ����� ������ 8
	cout << "���� �������� ������ 8, ��� - �������" ;
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

	cout << "�������������" << endl<< "���� ���� ������������� �����, ����� �� �� ������ ��� � �������������, ��� �������� �� 0"<< endl;
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