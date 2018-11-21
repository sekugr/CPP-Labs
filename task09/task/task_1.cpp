

#include "stdafx.h"
#include "task.h"
#include <stack>



using namespace std;


void task_1()
{
	cout << "Задание 9.1" << endl;
	stack <char> st;

	int size;
	char str[80];// = { "Какаято строка" };
	cout << "Введи строку \n";
	cin.getline(str, 80);
	clr_cin;
	size = strlen(str);
	
	//cout << size;
	for (int i = 0; i < size; i++)
	{
		st.push(str[i]);
	}
	for (int i = 0; i < size ; i++)
	{
		str[i] = st.top();
		st.pop();
	}

	
	
	
	cout << str << endl;
}
