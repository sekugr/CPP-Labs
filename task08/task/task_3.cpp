
#include "stdafx.h"
#include "task.h"

bool f_exit(char *str)
{
	char *otv = strstr(str, "����");
	if (otv != NULL)
	{
		cout << "����������!\n\n";
		return true;
	}
		
	else
	{
		return false;
	}

	
}

void task_3()
{
	cout << "������� 8.3" << endl;
	char str[255];
	char* otv = NULL;
	cout << "����������� ���� ������������!\n�������� �� ����\n";
	clr_cin;
	
	cin.getline(str, 255);

	while (!f_exit(str))
	{
		otv = strstr(str, "����");
		if (otv != NULL)
			//cout << *otv << endl;
			puts("������");

		otv = strstr(str, "�����");
		if (otv != NULL)
			//cout << *otv << endl;
			puts("������");

		otv = strstr(str, "���");
		if (otv != NULL)
		{
			time_t t = time(0);   // get time now
			struct tm * now = localtime(&t);
			//cout << (now->tm_mday) << '-' << (now->tm_mon + 1) << '-' << now->tm_year + 1900 << endl;
			cout << now->tm_hour << ":" << now->tm_min << endl;
		}
		otv = strstr(str, "����");
		if (otv != NULL)
		{
			time_t t = time(0);   // get time now
			struct tm * now = localtime(&t);
			//cout << (now->tm_mday) << '-' << (now->tm_mon + 1) << '-' << now->tm_year + 1900 << endl;
			cout << now->tm_hour << ":" << now->tm_min << endl;
		}
		cout << "��������� ��������?\n";
		clr_cin;

		cin.getline(str, 255);
	}
	
	//else cout << "�� �������\n";
}