

#include "stdafx.h"
#include "task.h"




using namespace std;

//struct user 
//{
//	string name;
//	string phone;
//	int age;
//	string adress;
//};

void task_1()
{
	cout << "Задание 8.1" << endl;
	FILE * f1 = nullptr;
	FILE * f2 = nullptr;
	char str[255];
	char n[5], k[5];
	int iN, iK;
	f1 = fopen("f1.txt", "r+");
	if (f1 != NULL) cout << "f1 is open\n";
	f2 = fopen("f2.txt", "w+");
	if (f2 != NULL) cout << "f2 is open\n";

	cout << "Считать строки с N по K\nВведите N: ";
	clr_cin;
	cin.getline(n, 5);
	n[4] = '\0';
	iN = atoi(n);
	//cout << iN << endl;
	cout << "Считать строки с N по K\nВведите K: ";
	clr_cin;
	cin.getline(k, 5);
	k[4] = '\0';
	iK = atoi(k);
	//cout << iK << endl;
	
	for (int i = 0; i < iK; i++)
	{
		if (feof(f1))
		{
			cout << "\nКонец файла\n"<< "скопировано строк "<< i-iN<< endl;
			break;
		}
		fgets(str, 255, f1);
		
		if (i >= iN)
		{
			cout << str ;
			fputs(str, f2);
		}
	}


	


	
	fclose(f1);
	fclose(f2);
	cout << endl;
}
