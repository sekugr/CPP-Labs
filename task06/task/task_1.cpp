#include "stdafx.h"
#include <iostream>  // cout, cin ...
#include "task.h"

using namespace std;

void task_1()
{
	system("cls");
	
	int* size = new int; // ����� ��������� �������
		
	cout << "������� 6.1, ��������� ������ �� �� ������" << endl;
	cout << "������� ���������� ����� � �������" << endl;
	cin >> *size;

	int* massiv = new int[*size];	// �������� ������
	int* tm = massiv;				// ���������� ��� �������� ������ ������ �������
	int* chet = new int[*size];		// ������ �����
	int* tch = chet;				// ���������� ��� �������� ������ ������ �������
	int* nechet = new int[*size];	// �� ������ �����
	int* tnch = nechet;				// ���������� ��� �������� ������ ������ �������

	cout << endl;

	cout << "������� ����� � ������" << endl;
	while (tm < (massiv + *size))
	{
		cin >> *tm; // ���� �������� �������
		if (*tm % 2 == 0)	// ����������� ��������
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

	// ����� ��������
	cout << endl << "�������� ������ " ;
	print_mas(massiv, massiv + *size);

	cout << endl << "������ ������ " ;
	print_mas(chet, tch);

	cout << endl << "�� ������ ������ ";
	print_mas(nechet, tnch);

	delete[] massiv;
	delete[] chet;
	delete[] nechet;
	delete size;


	

	cout << endl;
	
}
