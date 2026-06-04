#include <iostream>

using namespace std;

int alanHesapla(double en,double boy);
int alanHesapla(double boy);

int main(int agrv,char**agrc)
{
	double en,boy;
	cout << "En ve Boyu Giriniz: " << endl;
	cin >> en >> boy;
	
	double alan = alanHesapla(en,boy);
	cout << "Alan = " << alan << endl;
	
	alan = alanHesapla(en);
	cout << "Alan = " << alan << endl;
	
	return 0;
}
int alanHesapla(double en,double boy)
{
	return en*boy;
}

int alanHesapla(double boy)
{
	return boy*boy;
}
