#include <iostream>


using namespace std;

int main(int agrc , char ** agrv)
{
	cout << "----HESAP MAKINASI----\n\nISLEMLER:\n\n(1)Toplama\n(2)Cikartma\n(3)Bolme\n(4)Carpma" << endl;
	
	string islem;
	double s1,s2;
	
	cout << "Islemi Secin: " << endl;
	cin >> islem;	
	
	if ( islem == "1")
	{
		cout << "Sayi 1: " << endl;
		cin>> s1;
	
		cout << "Sayi 2: " << endl;
		cin >> s2;
		
		cout << "Sonuc: " << s1+s2 << endl;
	}
	
	else if ( islem == "2")
	{
		cout << "Sayi 1: " << endl;
		cin>> s1;
	
		cout << "Sayi 2: " << endl;
		cin >> s2;
		
		cout << "Sonuc: " << s1-s2 << endl;
	}
	
	else if ( islem == "3")
	{
		cout << "Sayi 1: " << endl;
		cin>> s1;
	
		cout << "Sayi 2: " << endl;
		cin >> s2;
		
		cout << "Sonuc: " << s1/s2 << endl;
	}
	
	else if ( islem == "4")
	{
		cout << "Sayi 1: " << endl;
		cin>> s1;
	
		cout << "Sayi 2: " << endl;
		cin >> s2;
		
		cout << "Sonuc: " << s1*s2 << endl;
	}
	
	else
	{
		cout << "Gecersiz Islem Girdiniz!" << endl;
	}
	
	return 0;
}
