#include <stdio.h>
#include <iostream>
#include <math.h>
#include <locale.h>	
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
start:
	cout << " Введите номер задания: ";
	int x;
	cin >> x;
	if (x == 1)
	{
		/*int A;
		cout << " Введите число: ";
		cin >> A;
		if (A % 2==0)
		{
		cout << " Истина: ";
		}
		else
		{
		cout << " Ложь: ";
		}*/
	}
	if (x == 2)
	{
		/*int A;
		cout << " Введите число A: ";
		cin >> A;
		if ((A % 2 ==0) || (A % 3 ==0)) //кратно двум или трем
		{
		cout << " Истина: ";
		}
		else
		{
		cout << " Ложь: ";
		}*/
	}
	if (x == 3)
	{
		/*int A, B;
		cout << " Введити число А: ";
		cin >> A;
		cout << " Введите число В: ";
		cin >> B;
		if ((A % 2) && (B % 2))
		{
		cout << " Истина: ";
		}
		else
		{
		cout << " Ложь: ";
		}*/
	}
	if (x == 4)
	{
		/*int X, Y, Z;
		X = 0;
		Y = 0;
		Z = 1;
		bool d;
		d = (X < Y) && (Y > Z);
		cout << d << endl;
		d = (X > Y);
		cout << d << endl;
		d = (X > Z) < Y;
		cout << d << endl;*/
	}
	if (x == 51)
	{
		/*int y, tg, x;
		cout << " Введите х:";
		cin >> x;
		cout << " Введите значение тангенса: ";
		cin >> tg;
		y = 2*tg*x;
		cout << " Ответ: " << y << "\n";*/

	}
	if (x == 52)
	{
		/*float y, x;
		cout << " Введите х: ";
		cin >> x;
		y = 3 / (x - 1);
		cout << " Ответ: " << y << endl;*/
	}
	if (x == 6)
	{
		/*int A, B, C;
		A = 1;
		B = 0;
		C = 1;
		bool d;
		d = A < (A > B) < C;
		cout << d << endl;
		d = A < C > (B < C);
		cout << d << endl;
		d = (A < B > C) < A;
		cout << d << endl;*/
	}
	if (x == 7)
	{
		/*	int A;
		cout << " Введите число А: ";
		cin >> A;
		if ((A > 9) && (A < 100))
		{
		cout << " Истина: ";
		}
		else
		{
		cout << " Ложь: ";
		}*/
	}
	if (x == 8)
	{
		/*int A, B, C;
		cout << " Введите число A: ";
		cin >> A;
		cout << " Введите число B: ";
		cin >> B;
		cout << " Введите число С: ";
		cin >> C;
		if ((A < 45) || (B < 45) || (C < 45))
		{
		cout << " Истина: ";
		}
		else
		{
		cout << " Ложь: ";
		}*/
	}
	if (x == 9)
	{
		/*int A;
		cout << " Введите число А: ";
		cin >> A;
		if ((A % 3) && (A != 0))
		{
		cout << " Истина: ";
		}
		else
		{
		cout << " Ложь: ";
		}*/
	}
	if (x == 10)
	{
		int A;
		cout << " Введите число А: ";
		cin >> A;
		if ((A > -123) && (A < -51))
		{
			cout << " Истина: ";
		}
		if ((A > 55) && (A < 123))
		{
			cout << " Истина: ";
		}
		else
		{
			cout << " Ложь: ";
		}
	}
}
