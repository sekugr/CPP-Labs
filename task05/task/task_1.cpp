

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
	
	cout << "������� 1" << endl;
	cout << "������� ���������� ����� � �������" << endl;
	cin >> size;
	cout << endl;
	cout << "������� ����� � ������" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
		if ((a[i] % 2) == 0)
		{
			l[li] = a[i];// ����� ������
			li++;
		}
		else
		{
			m[mi] = a[i];// ����� ��������
			mi++;
		}
	}

	// ����� ��������
	cout << " �������� ������: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i]<< " " ;
	}
	cout << endl;
	cout << " ׸���� �����: " << endl;
	for (int i = 0; i < li; i++)
	{
		cout << l[i] << " ";
	}
	cout << endl;
	cout << " �������� �����: " << endl;
	for (int i = 0; i < mi; i++)
	{
		cout << m[i] << " ";
	}
	cout << endl;
}
