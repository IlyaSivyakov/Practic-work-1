#include <iostream>
using namespace std;
int main() {
	cout << "1 zadanie"<<endl;
	cout << "int " << sizeof(int)<< endl;
	cout << "short int " << sizeof(short int)<< endl;
	cout << "long int " << sizeof(long int)<<endl;
	cout << "float " << sizeof(float)<< endl;
	cout << "double " << sizeof(double)<< endl;
	cout << "long double "<<sizeof(long double) << endl;
	cout << "char " << sizeof(char)<< endl;
	cout << "bool "<<sizeof(bool)<<endl;

	cout << "2 zadanie"<<endl<<"Vvedite chislo"<<" ";
	int k;
	cin >> k;
	unsigned int d = sizeof(int) * 8;
	unsigned m = 1 << d - 1;
	for (int i = 1; i <= d; i++)
	{
		putchar(k & m ? '1':'0');
		k <<= 1;
		if (i % 8 == 0)
		{
			putchar(' ');
		}
		if (i % d - 1 == 0)
		{
			putchar(' ');
		}
		
	}
	cout << endl;
	cout << "3 zadanie" << endl;
	union {
		float pi = 3.14;
		int a;
	};
	

	m = 1 << d - 1;
	for (int i = 1; i <= d; i++)
	{
		putchar(a & m ? '1' : '0');
		a <<= 1;
		if (i % 8 == 0)
		{
			putchar(' ');
		}
		if (i % d - 1 == 0)
		{
			putchar(' ');
		}

	}
	cout << endl;
	cout << "4 zadanie" << endl;
	union {
		double pi_2;
		int b[2];
	};

	m = 1 << d - 1;
	for (int j = 0; j <= 1; j++)
		for (int i = 1; i <= d; i++){
			{
				putchar(b[j] & m ? '1' : '0');
				b[j] <<= 1;
				if (i % 8 == 0)
				{
					putchar(' ');
				}
				if (i % d - 1 == 0)
				{
					putchar(' ');
				}
			}
	}
	return 0;
}
