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
	cout << "������ ����� �������"<<endl;
	cin >> N;
	switch (N)
	{
	case 1:
	{
		int a, b;
		cout << "������ ������" << endl;
		cin >> a;
		cin >> b;
		if (a == b)
		{
			cout << "��� ����� �����" << "\n";
		}
		else
		{
			cout << "������� ����� �� �����������" << "\n";
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
		cout << "������� a " << endl;
		cin >> a;

		cout << "������� b " << endl;
		cin >> b;

		cout << "������� c " << endl;
		cin >> c;
		cout << "������� d " << endl;
		cin >> d;
		cout << "������� e " << endl;
		cin >> e;
		res = (a + b + c + d + e) / 5;

		if(res >= 4)
		{
		
		cout << "������� �� ������� "<<"\n";
			
		} 
		
		else
		{
			cout << "������� ������� "<<"\n";
		}
		
		}
		break;
	case 3:
	{
		int a, b;
		cout << "������ ������" << "\n";
		cin >> a;
		cin >> b;
		int c;
		cout << "��������" <<" "<< a+b << "\n";
		cout << "���������" <<" "<< a -b << "\n";
		cout << "���������" <<" "<< a * b << "\n";
		cout << "�������" <<" "<<a/b << "\n";
	}
	break;
	case 4:
	{
		char text, fon;
		char color[10] = "color";
		cout << "0 = ������\t8 = �����\n";
		cout << "1 = �����\t9 = ������ - �����\n";
		cout << "2 = �������\tA = ������ - �������\n";
		cout << "3 = �������\tB = ������ - �������\n";
		cout << "4 = �������\tC = ������ - �������\n";
		cout << "5 = �������\tD = ������ - �������\n";
		cout << "6 = ������\tE = ������ - ������\n";
		cout << "7 = �����\tF = ���� - �����\n\n";
		cout << "������� ���� ����: ";
		cin >> color [6];
		cout << "������� ���� ������: ";
		cin >> color [7];
		if (((color[6] < 'a') || (color[6] > 'f')) && ((color[6] < '0') || (color[6] > '9')))
		
			cout << "�� ����� ������ ���� ����" << endl;
			
		
			
		else if (((color[7] < 'a') || (color[7] > 'f')) && ((color[7] < '0') || (color[7] > '9')))
		{
			cout << "�� ����� ������ ���� ����" << endl;
		}
		else		
			system(color);
		}

break;
	case 5:
	{
		int m;
		cout << "������ ������" << endl;
		cin >> m;
		for (int n=0;n<=7;n++)
		cout << "��������� �� ����� � �������" <<"  "<< n <<"="<<pow(m,n) << endl;
		
	}
	break;
	case 6:
	{
		int a,b,c;
		cout << "������ ������" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		int k = (a + b + c) / 3;
		cout << "����� ���������� �� ���� ���������:" <<k<< endl;
		int sum = 0;
		int p_a = a - k;
		int p_b = b - k;
		int p_c = c - k;
		if (p_a > 0)
		{
			sum = sum + p_a;
			cout << "�  ��������� "<<"a"<<" ���������� ���������� " << sum << endl;
		}
		else if (p_b > 0)
		{
			sum = sum + p_b;
			cout << "�  ��������� " << "b" << " ���������� ���������� " << sum << endl;
		}
		else if (p_c > 0)
		{
			sum = sum + p_c;
			cout << "�  ��������� " << "c" << " ���������� ���������� " << sum << endl;
		}

		else
		{
			cout << " ����� ���������� ��������� ����� ���������� � ���������" << sum << endl;

		}

	}
	break;
		default:
			break;
		

	}
	goto bigboss;
	}








