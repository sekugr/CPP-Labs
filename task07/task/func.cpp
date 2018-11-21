#include "stdafx.h"
#include "task.h"

char* str_in_str(char* dest_string, char* str, int pos_s) // вставка в строку dest_string, в позицию pos_s, строки str. 
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

int chek_sym(char s)// проверка символа возврат 1 - цифра, 2 - анг больш, 3 - англ мал, 4 - рус больш, 5 - рус мал. иначе - 0
{
	if ((((int)s >= 48) && ((int)s <= 58))) // цифры
	{
		return 1;
	}
	else
	{
		if ((((int)s >= 65) && ((int)s <= 90))) // анг больш
		{
			return 2;
		}
		else
		{
			if ((((int)s >= 97) && ((int)s <= 122))) //3-англ мал
			{
				return 3;
			}
			else
			{
				if ((((int)s <= -64) && ((int)s >= -33))) //4- рус больш
				{
					return 4;
				}
				else
				{
					if ((((int)s <= -32) && ((int)s >= -1))) //5 - рус мал.
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
	cout << endl << "Введите строку \n";
	
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
	cout << endl << "Вывод массива: " << endl;
	while (mas <  adr_end_mas)
	{
		cout << *mas++ << " ";
	}
	cout << endl;
}
