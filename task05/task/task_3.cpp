#include "stdafx.h"
//#include <pch.h>
#include <locale.h>
#include <iostream>  // cout, cin ...
#include "task.h"
#include <ctime>
#include <cmath>
using namespace std;


void task_3()
{
	cout << "������� 3" << endl << "������ �� 100 ��������� ����� �� -50 �� 50"<< endl;
	srand(time(0));
	int a[100], ap[100];
	int np = 0, kp = 0;
	bool flag = false;
	for (int i = 0; i < 100; i++)
	{
		a[i] = (rand() % 100) - 50;
		cout << a[i] << " ";
		if (i%20 ==19) cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 100; i++)
	{
		if ((a[i] < 0)&& (a[i+1]<0)&&(!flag))
		{
			flag = true;
			np = i;// ������ ������������������
		}
		if ((a[i] >= 0)&& flag)
		{
		//	cout << endl;
			flag = false;
			kp = i; // ����� ������������������
			int sum = 0;// ����� ������������������
			float sr = 0; // ������� ������������������
			for (int q = np; q < kp; q++)
			{
				sum -= a[q];
			}
			sr = sum / (kp - np);
			for (int q = np; q < kp; q++)
			{
				if (a[q] < (-1*sr)) a[q] = 0;
			}
		}
				
	}
	cout << endl << "�� ���� ������������������� (������ 1 �� ����� ������) ������������� ����� ��������, ���������� �������� ������� ��������� ���������� ������� �������� ��� ���� ������������������, �������� �� 0." << endl;
	for (int i = 0; i < 100; i++)
	{
		cout << a[i] << " ";
		if (i % 20 == 19) cout << endl;
	}
	cout << endl;

}