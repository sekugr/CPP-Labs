
#include "stdafx.h"
#include "task.h"

void task_3()
{
	cout << "������� 7.3" << endl;
	char path[] = "D:\\816\\task07\\task\\Debug\\task.exe";
	//char path[] = "Z:\\816\\������� ������ �����������\\C++\\task07\\task\\Debug\\task.exe";
	cout << "���� � �����:  " << path << endl;
	char  *pch;
	
	int num_lex = 0;
	pch = strtok(path, "\\");
	
	while (pch != NULL)                         // ���� ���� �������
	{
		puts(pch);
		//cout << pch << endl;
		pch = strtok(NULL, "\\");
		num_lex++;
		
	}
		
	char *temp = new char[strlen(path) +1];
	
	int adr = 0;
	for (int i = 0; i < num_lex-1; i++)
	{
		strcpy(temp, path + adr);
		adr = adr + strlen(temp) + 1;
		if (i == num_lex - 2)cout <<"������� �����:   "<< temp << endl;
	}


	
//	delete[] temp;
}