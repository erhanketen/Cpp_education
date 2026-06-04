#include <iostream>

using namespace std;

int toplama();
int cikarma();
int carpma();
double bolme();

int main(int agrv,char**agrc)
{
	int islem;
	char reply;
	bool feedback;
	double cvp;
	
	do{
		cout << "ISLEMLER:\n(1) Toplama\n(2) Cikarma\n(3) Carpma\n(4) Bolme\n--> ";
		cin >> islem;
		
		switch (islem)
		{
			case 1:
				cvp = toplama();
				break;
			case 2:
				cvp = cikarma();
				break;
			case 3:
				cvp = carpma();
				break;
			case 4:
				cvp = bolme();
				break;	
		}
		cout << "Cevap = " << cvp << endl;
		
		cout << "Baska Islem? (y/n): ";
		cin >> reply;
		
		if (reply == 'y')
		{
			feedback = true;
		}
		else
		{
			feedback = false;
		}
	}while(feedback);
	return 0;
}

int toplama()
{
	int sayi1,sayi2;
	
	cout << "1. Sayiyi Girin: ";
	cin >> sayi1;
	
	cout << "2. Sayiyi Girin: ";
	cin >> sayi2;
	
	return sayi1 + sayi2;
}

int cikarma()
{
	int sayi1,sayi2;
	
	cout << "1. Sayiyi Girin: ";
	cin >> sayi1;
	
	cout << "2. Sayiyi Girin: ";
	cin >> sayi2;
	
	return sayi1 - sayi2;
}

int carpma()
{
	int sayi1,sayi2;
	
	cout << "1. Sayiyi Girin: ";
	cin >> sayi1;
	
	cout << "2. Sayiyi Girin: ";
	cin >> sayi2;
	
	return sayi1 * sayi2;
}

double bolme()
{
	int sayi1,sayi2;
	
	cout << "1. Sayiyi Girin: ";
	cin >> sayi1;
	
	cout << "2. Sayiyi Girin: ";
	cin >> sayi2;
	
	return sayi1 / sayi2;
}
