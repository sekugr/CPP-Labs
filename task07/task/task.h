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
void sdvig(int *massiv_pos, int *massiv_end); // ������� ������ ������� � ������� massiv_pos �� 1 �������� �����, �������� � ������� ����������
void print_mas(int* mas, int* adr_end_mas);// ������� ������ �������
void clr_cin(); // ������� ������ �����
void in_str_console(char* str, int* str_size); // ������� ����� ������ � ������� str_size - 500
int chek_sym(char s);// �������� ������� ������� 1 - �����, 2 - ��� �����, 3 - ���� ���, 4 - ��� �����, 5 - ��� ���. ����� - 0
char* str_in_str(char* dest_string, char* str, int pos_s); // ������� � ������ dest_string, � ������� pos_s, ������ str. 