#pragma once

#include "stdafx.h"
#include "task.h"



void task_2()
{
	cout << "������� 8.2" << endl;
	skob skobki;// �������� ��� �������� ������ 3� �����// task.h
	for (int i = 0; i < 3; i++)  // ��������� ���������
	{
		skobki.num_sk[i] = 0;
	}
	skobki.sk[0] = '(';
	skobki.sk[1] = ')';
	skobki.sk[2] = '{';
	skobki.sk[3] = '}';
	skobki.sk[4] = '[';
	skobki.sk[5] = ']';


	
	char buffer[255];
	FILE * inFile;
	FILE * outFile;
	inFile = fopen("skobki.txt", "r");
	outFile = fopen("result.txt", "w");
	if (inFile == NULL) cout << "���� skobki.txt �� ������\n";
	// ������� ������ � �����
	while (!(feof(inFile)))
	{
		fgets(buffer, 255, inFile);
		for (int i = 0; i < strlen(buffer); i++)
		{
			switch (buffer[i])
			{
			case '(':skobki.num_sk[0]++;//	sk1++;// ������� {} = 123/125
				break;
			case ')':skobki.num_sk[0]--;//sk1--;
				break;
			case '{':skobki.num_sk[1]++;// sk2++;// ������� () = 40/41
				break;
			case '}':skobki.num_sk[1]--;// sk2--;
				break;
			case '[':skobki.num_sk[2]++;// sk3++;// ������� [] = 91/93
				break;
			case ']':skobki.num_sk[2]--;// sk3--;
				break;
			default:
				break;
			}

		}
	}
	// ����� �����������
	char res_sk[255]= "\0"; // ������ � ������������ ��������
	char sk[2]; // ������ � ����� ������ ������
	for (int i = 0; i < 3; i++)
	{
		if (skobki.num_sk[i] == 0) 
		{
			
			sk[0] = skobki.sk[i * 2]; sk[1] = '\0';
			strcpy(res_sk, sk );
			sk[0] = skobki.sk[1+(i * 2)]; sk[1] = '\0';
			strcat(res_sk, sk);
			strcat(res_sk, "�������\n");
			fputs(res_sk, outFile);
			cout << res_sk;
		}
		else
		{
			if (skobki.num_sk[i] > 0)
			{
				
				_itoa(abs(skobki.num_sk[i]),res_sk, 10);
				sk[0] = skobki.sk[i * 2]; sk[1] = '\0';
				strcat(res_sk, sk);
				strcat(res_sk, "������\n");
				fputs(res_sk, outFile);
			
				cout << res_sk;
			}
			else
			{
				_itoa(abs(skobki.num_sk[i]), res_sk, 10);
				sk[0] = skobki.sk[1+(i * 2)]; sk[1] = '\0';
				strcat(res_sk, sk);
				strcat(res_sk, "������\n");
				fputs(res_sk, outFile);
				
				cout << res_sk;
			}
		}
	}
	cout << "���� result.txt\n";

	fclose(inFile);
	fclose(outFile);
	
}