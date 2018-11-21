#pragma once

#include "stdafx.h"
#include <locale.h>
#include <iostream>  // cout, cin ...

#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
using namespace std;


void task_1();
void task_2();
void task_3();
void sdvig(int *massiv_pos, int *massiv_end); // функция сдвига массива с позиции massiv_pos на 1 значение влево, значение в позиции затирается
void print_mas(int* mas, int* adr_end_mas);// функция вывода массива
void clr_cin(); // очистка потока ввода
void in_str_console(char* str, int* str_size); // функция ввода строки с консоли str_size - 500
int chek_sym(char s);// проверка символа возврат 1 - цифра, 2 - анг больш, 3 - англ мал, 4 - рус больш, 5 - рус мал. иначе - 0
char* str_in_str(char* dest_string, char* str, int pos_s); // вставка в строку dest_string, в позицию pos_s, строки str. 