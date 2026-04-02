#include <iostream>
#include <cmath>

using namespace std;

int main(int argc,char**argv)
{
	string id = "admin";
	string parola = "admin123";
	
	string kullanici_adi, sifre;
	
	start: //baslangýc
	
	cout << "Kullanici Adi Girin: ";
	cin >> kullanici_adi;
	
	cout << "Sifre Girin: ";
	cin >> sifre;
	
	if (kullanici_adi == id and sifre == parola)
	{	
		cout << "Giris Basarili" << endl;
		int s1,s2;
		
		islemler: //islemler basi
			
		string islem;
		
		cout << "Islemler:\n(1) Sifre Guncelleme\n(2) Hipotenus Hesaplama\n(exit)KAPAT\n\nIslem Giriniz: ";
		cin >> islem;
		
		if (islem == "1")
		{
			update: //giris basi
			string yeni_sifre;
			cout << "Mevcut Sifrenizi Giriniz: ";
			cin >> sifre;
			
			if (sifre == parola)
			{
				cout << "Yeni Sifrenizi Giriniz: ";
				cin >> yeni_sifre;
				
				parola = yeni_sifre;
				
				cout << "Sifreniz Basariyla Guncellenmistir..." << endl;
				goto islemler;
			}
			else
			{
				cout << "Yanlis Sifre Girdiniz Lutfen Tekrar Deneyin" << endl;
				goto update;
			}
		}
		else if (islem == "2")
		{
		cout << "1. kenari girin: ";
		cin >> s1;
		cout << "2. kenari girin: ";
		cin >> s2;
		
		double hipo = sqrt(pow(s1,2)+pow(s2,2));
		
		cout << "Hipotenus Degeri = " << hipo << endl;
		goto islemler;
		}
		else if (islem == "exit")
		{
			cout<<"Kapatiliyor..."<<endl;
			return 0;
		}
		else
		{
			cout << "Gecersiz Ýslem Sectiniz." << endl;
			goto islemler;
		}
	}
	else if (kullanici_adi != id and sifre == parola)
	{
		cout << "Kullanici Adi Yanlis" << endl;
		goto start;
	}
	else if(kullanici_adi == id and sifre != parola)
	{
		cout << "Sifre Yanlis" << endl;
		goto start;
	}
	else
	{
		cout << "Kullanici Adi ve Sifre Yanlis" << endl;
		goto start;
	}
	
	return 0;
	
}
