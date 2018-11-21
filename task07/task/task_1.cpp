

#include "stdafx.h"
#include "task.h"
using namespace std;

void task_1()
{
	cout << "Çàäàíèå 7.1" << endl;
	char s[] = "stRing 800()/., maSsiv Between 2009 and 2013 the US Central Intelligence Agency suffered a “catastrophic” ";
	char* sv;
	char* str = new char[250];
	sv = str;
	cout << s << endl<< endl;
	for (int i = 0; i < sizeof(s); i++)
	{
		if ((chek_sym(s[i]) > 0)||(s[i]==32))
		{
				s[i] = tolower(s[i]);
				*str = s[i];
				str++;		
		}
	}
	
	*str = '\0';
	cout << sv << endl;
	delete[] sv;

}

