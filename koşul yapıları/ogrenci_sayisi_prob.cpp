#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int agrv, char**agrc)
{
	srand(time(0));
	
	int ogrenci_sayisi;
	
	cout << "Ogrenci Sayisini Giriniz: ";
	cin >> ogrenci_sayisi;
	
	int dizi[ogrenci_sayisi];
	
	for (int i=0;i<ogrenci_sayisi;i++)
	{
		int sayi = (rand() % 100) + 1;
		dizi[i] = sayi;
	}
	
	int toplam = 0;
	
	for (int i=0;i<ogrenci_sayisi;i++)
	{
		toplam += dizi[i];
	}
	
	double ort = toplam / ogrenci_sayisi;
	
	cout << "Ortalama: " << ort <<endl;
	
	for (int i=0;i<ogrenci_sayisi;i++)
	{
		if (dizi[i] > ort)
		{
			cout << dizi[i] <<  " sayisi ortalamadan buyuk" << endl;
		}
		else if (dizi[i]<ort)
		{
			cout << dizi[i] <<  " sayisi ortalamadan kucuk" << endl;
		}
		else
		{
			cout << dizi[i] <<  " sayisi ortalamaya esit" << endl;
		}
	}
	
	
}
