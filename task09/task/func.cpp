#include "stdafx.h"
#include "task.h"

char* str_in_str(char* dest_string, char* str, int pos_s) // ������� � ������ dest_string, � ������� pos_s, ������ str. 
{
	int* size = new int;
	*size = strlen(dest_string) + strlen(str);
	char* res_str = new char[*size];
	strncpy(res_str, dest_string, pos_s + 1);
	*(res_str + pos_s + 1) = '\0';
	strncat(res_str, str, strlen(str));
	char* st;
	st = (dest_string + pos_s + 1);
	strcat(res_str, st);
	delete size;
	return res_str;
}

int chek_sym(char s)// �������� ������� ������� 1 - �����, 2 - ��� �����, 3 - ���� ���, 4 - ��� �����, 5 - ��� ���. ����� - 0
{
	if ((((int)s >= 48) && ((int)s <= 58))) // �����
	{
		return 1;
	}
	else
	{
		if ((((int)s >= 65) && ((int)s <= 90))) // ��� �����
		{
			return 2;
		}
		else
		{
			if ((((int)s >= 97) && ((int)s <= 122))) //3-���� ���
			{
				return 3;
			}
			else
			{
				if ((((int)s <= -64) && ((int)s >= -33))) //4- ��� �����
				{
					return 4;
				}
				else
				{
					if ((((int)s <= -32) && ((int)s >= -1))) //5 - ��� ���.
					{
						return 5;
					}
					else return 0;
				}
			}
		}
	}



}

void clr_cin()
{
	cin.clear();
	while (cin.get() != '\n');
}
void in_str_console(char* str, int* str_size)
{
	char *temp_str;
	temp_str = str;
	clr_cin();
	cout << endl << "������� ������ \n";
	
	cin.getline(temp_str, *str_size);
	temp_str = temp_str + strlen(temp_str);
	*temp_str = '\0';
	*str_size = strlen(str);

}

void sdvig(int *massiv_pos, int *massiv_end)
{
	for (int* i = massiv_pos; i < (massiv_end); *i++)
	{
		*i = *(i + 1);
	}
}
void print_mas(int* mas, int* adr_end_mas)
{
	cout << endl << "����� �������: " << endl;
	while (mas <  adr_end_mas)
	{
		cout << *mas++ << " ";
	}
	cout << endl;
}
