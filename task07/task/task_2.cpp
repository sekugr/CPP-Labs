#pragma once

#include "stdafx.h"
#include "task.h"



void task_2()
{
	cout << "������� 7.2" << endl;


	int k, n, pos_s;
	char s[] = "������ ������� ���������, � �������� ������.";
	char s1[] = " � ������������ �������,";
	cout <<endl<< "������: "<< s << endl <<"���������: "<< s1 << endl;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ',')pos_s = i;
	}
	cout << endl<< "���������: " << str_in_str(s, s1, pos_s) << endl << endl;
}