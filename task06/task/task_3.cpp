#include "stdafx.h"
#include <iostream>  // cout, cin ...
#include "task.h"

using namespace std;

void task_3()
{
	system("cls");
	
	cout << "������� 6.3" << endl << "������ �� 100 ��������� ����� �� -50 �� 50" << endl;
	srand(time(0));
	int* sz = new int;	*sz = 100;

	int* mas = new int[*sz]; //������ ��������� �����

		for (int* i = mas; i < (mas + *sz); i++) // ��������� ������
		{
			*i = (rand() % 100) - 50;
		}
	
	cout << "�������� ������" << endl;
	print_mas(mas, (mas + *sz)); // ����� ������� ��������� �����
	cout << endl;
	// ����� ������������������� � �������� �������� �� ������� �������
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
								sdvig(n, mas + *sz);// ������� ������ ������� func.cpp
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
	cout << "��  ����  �������������������  �������������  ����� �������  ��������, ����������  ��������  �������  ���������  ���������� ������� �������� ��� ���� ������������������." << endl;
	print_mas(mas, mas + *sz);
	delete sz;
	delete[] mas;
}
