#include <iostream>

using namespace std;

int factorial(int);

int main(int agrv,char**agrc)
{
	while (true)
	{
		int sayi;
		cout << "Faktoriyeli Alinacak Olan Sayi: ";
		cin >> sayi;
		
		int cevap = factorial(sayi);
	
		cout << "Faktoriyel = " << cevap << endl;
		
		char reply;
		cout << "Baska Islem? (y/n): ";
		cin >> reply;
		
		if (reply == 'n')
		{
			break;
		}
	}
	return 0;
}

int factorial( int x)
{
	int toplam = 1;
	for (int i =2;i<=x;i++)
	{
		toplam *= i;
	}
	return toplam;
}

