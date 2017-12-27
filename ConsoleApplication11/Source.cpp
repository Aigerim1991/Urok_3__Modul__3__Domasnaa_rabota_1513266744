#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	bigboss:
	int N;
	cout << "Ввести номер задания"<<endl;
	cin >> N;
	switch (N)
	{
	case 1:
	{
		int a, b;
		cout << "Ввести данные" << endl;
		cin >> a;
		cin >> b;
		if (a == b)
		{
			cout << "Эти число равны" << "\n";
		}
		else
		{
			cout << "Вывести число по возрастанию" << "\n";
			for (a; a <= b; a++)
			{
				cout << a << endl;
			}

		}

	}
	break;
	case 2:
	{
		int a, b, c, d, e;
		int res;
		cout << "Введите a " << endl;
		cin >> a;

		cout << "Введите b " << endl;
		cin >> b;

		cout << "Введите c " << endl;
		cin >> c;
		cout << "Введите d " << endl;
		cin >> d;
		cout << "Введите e " << endl;
		cin >> e;
		res = (a + b + c + d + e) / 5;

		if(res >= 4)
		{
		
		cout << "Студент не допушен "<<"\n";
			
		} 
		
		else
		{
			cout << "Студент допушен "<<"\n";
		}
		
		}
		break;
	case 3:
	{
		int a, b;
		cout << "Ввести данные" << "\n";
		cin >> a;
		cin >> b;
		int c;
		cout << "Сложение" <<" "<< a+b << "\n";
		cout << "Вычитание" <<" "<< a -b << "\n";
		cout << "Умножение" <<" "<< a * b << "\n";
		cout << "Деление" <<" "<<a/b << "\n";
	}
	break;
	case 4:
	{
		char text, fon;
		char color[10] = "color";
		cout << "0 = Черный\t8 = Серый\n";
		cout << "1 = Синий\t9 = Светло - синий\n";
		cout << "2 = Зеленый\tA = Светло - зеленый\n";
		cout << "3 = Голубой\tB = Светло - голубой\n";
		cout << "4 = Красный\tC = Светло - красный\n";
		cout << "5 = Лиловый\tD = Светло - лиловый\n";
		cout << "6 = Желтый\tE = Светло - желтый\n";
		cout << "7 = Белый\tF = Ярко - белый\n\n";
		cout << "Введите цвет фона: ";
		cin >> color [6];
		cout << "Введите цвет текста: ";
		cin >> color [7];
		if (((color[6] < 'a') || (color[6] > 'f')) && ((color[6] < '0') || (color[6] > '9')))
		
			cout << "не верно введен цвет фона" << endl;
			
		
			
		else if (((color[7] < 'a') || (color[7] > 'f')) && ((color[7] < '0') || (color[7] > '9')))
		{
			cout << "не верно введен цвет фона" << endl;
		}
		else		
			system(color);
		}

break;
	case 5:
	{
		int m;
		cout << "Ввести данные" << endl;
		cin >> m;
		for (int n=0;n<=7;n++)
		cout << "введенное им число в степень" <<"  "<< n <<"="<<pow(m,n) << endl;
		
	}
	break;
	case 6:
	{
		int a,b,c;
		cout << "Ввести данные" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		int k = (a + b + c) / 3;
		cout << "Число пассажиров на одну маршрутку:" <<k<< endl;
		int sum = 0;
		int p_a = a - k;
		int p_b = b - k;
		int p_c = c - k;
		if (p_a > 0)
		{
			sum = sum + p_a;
			cout << "В  маршрутку "<<"a"<<" необходимо пересадить " << sum << endl;
		}
		else if (p_b > 0)
		{
			sum = sum + p_b;
			cout << "В  маршрутку " << "b" << " необходимо пересадить " << sum << endl;
		}
		else if (p_c > 0)
		{
			sum = sum + p_c;
			cout << "В  маршрутку " << "c" << " необходимо пересадить " << sum << endl;
		}

		else
		{
			cout << " Число пассажиров нехватает чтобы пересадить в маршрутки" << sum << endl;

		}

	}
	break;
		default:
			break;
		

	}
	goto bigboss;
	}








