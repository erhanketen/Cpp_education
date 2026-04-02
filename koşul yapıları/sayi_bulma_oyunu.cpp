#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc , char ** argv)
{
	srand(time(0));
	
	int sayi = rand() % 100 +1;
	
	int tahmin;
	
	cout << "Tahmininizi Girin: (kalan hak 10): ";
	cin >> tahmin;
	
	if (tahmin == sayi)
	{
		cout << "Akil Okuyucu" << endl;
		return 0;
	}
	else if (tahmin < sayi)
	{
		cout << "Daha Yuksek Dene" << endl;
	}
	else if (tahmin > sayi)
	{
		cout << "Daha Dusuk Dene" << endl;
	}
	
	cout << "Tahmininizi Girin: (kalan hak 9): ";
	cin >> tahmin;
	
	if (tahmin == sayi)
	{
		cout << "Akil Okuyucu" << endl;
		return 0;
	}
	else if (tahmin < sayi)
	{
		cout << "Daha Yuksek Dene" << endl;
	}
	else if (tahmin > sayi)
	{
		cout << "Daha Dusuk Dene" << endl;
	}
	
	
	cout << "Tahmininizi Girin: (kalan hak 8): ";
	cin >> tahmin;
	
	if (tahmin == sayi)
	{
		cout << "Akil Okuyucu" << endl;
		return 0;
	}
	else if (tahmin < sayi)
	{
		cout << "Daha Yuksek Dene" << endl;
	}
	else if (tahmin > sayi)
	{
		cout << "Daha Dusuk Dene" << endl;
	}
	
	
	cout << "Tahmininizi Girin: (kalan hak 7): ";
	cin >> tahmin;
	
	if (tahmin == sayi)
	{
		cout << "Ortalama Zeka" << endl;
		return 0;
	}
	else if (tahmin < sayi)
	{
		cout << "Daha Yuksek Dene" << endl;
	}
	else if (tahmin > sayi)
	{
		cout << "Daha Dusuk Dene" << endl;
	}
	
	
	cout << "Tahmininizi Girin: (kalan hak 6): ";
	cin >> tahmin;
	
	if (tahmin == sayi)
	{
		cout << "Ortalama Zeka" << endl;
		return 0;
	}
	else if (tahmin < sayi)
	{
		cout << "Daha Yuksek Dene" << endl;
	}
	else if (tahmin > sayi)
	{
		cout << "Daha Dusuk Dene" << endl;
	}
	
	
	cout << "Tahmininizi Girin: (kalan hak 5): ";
	cin >> tahmin;
	
	if (tahmin == sayi)
	{
		cout << "Ortalama Zeka" << endl;
		return 0;
	}
	else if (tahmin < sayi)
	{
		cout << "Daha Yuksek Dene" << endl;
	}
	else if (tahmin > sayi)
	{
		cout << "Daha Dusuk Dene" << endl;
	}
	
	
	cout << "Tahmininizi Girin: (kalan hak 4): ";
	cin >> tahmin;
	
	if (tahmin == sayi)
	{
		cout << "Kendini Gelistirmen Gerek" << endl;
		return 0;
	}
	else if (tahmin < sayi)
	{
		cout << "Daha Yuksek Dene" << endl;
	}
	else if (tahmin > sayi)
	{
		cout << "Daha Dusuk Dene" << endl;
	}
	
	
	cout << "Tahmininizi Girin: (kalan hak 3): ";
	cin >> tahmin;
	
	if (tahmin == sayi)
	{
		cout << "Kendini Gelistirmen Gerek" << endl;
		return 0;
	}
	else if (tahmin < sayi)
	{
		cout << "Daha Yuksek Dene" << endl;
	}
	else if (tahmin > sayi)
	{
		cout << "Daha Dusuk Dene" << endl;
	}
	
	
	cout << "Tahmininizi Girin: (kalan hak 2): ";
	cin >> tahmin;
	
	if (tahmin == sayi)
	{
		cout << "Kendini Gelistirmen Gerek" << endl;
		return 0;
	}
	else if (tahmin < sayi)
	{
		cout << "Daha Yuksek Dene" << endl;
	}
	else if (tahmin > sayi)
	{
		cout << "Daha Dusuk Dene" << endl;
	}
	
	cout << "Tahmininizi Girin: (kalan hak 1): ";
	cin >> tahmin;
	
	if (tahmin == sayi)
	{
		cout << "Kendini Gelistirmen Gerek" << endl;
		return 0;
	}
	
	cout << "Bilemedin... Sayi " << sayi << " idi" << endl;
	return 0;
}
