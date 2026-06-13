#include <iostream>
#include <fstream>

using namespace std;

void kayit();
void giris();
void dosya_yaz(string kullanici_adi,string eposta,string sifre);
bool dosya_ara(string kullanici_adi,string sifre);
void kullanici_UI();

int main(int agrc,char**agrv)
{
	cout << "==== KULLANICI GIRISI ====\n" << endl;
	
	while (true)
	{
		int secim;
		cout << "ISLEMLER\n1- Kayit\n2- Giris\n3- Cikis\n-->"
		cin >> secim;
		
		if (secim == 1)
		{
			kayit();
		}
		else if (secim == 2)
		{
			giris();
		}
		else if (secim == 3)
		{
			cout << "Cikiliyor..." << endl;
			break;
		}
		else
		{
			cout << "Gecersiz Islem Secildi!" << endl;
		}
	}
	return 0;
}

void kayit()
{
	string kullanici_adi,eposta,sifre;
	
	cout << "Kullanici Adi: ";
	cin >> kullanici_adi;
	
	cout << "E-posta: ";
	cin >> eposta;
	
	cout << "Sifre: ";
	cin >> sifre;
	
	dosya_yaz(kullanici_adi,eposta,sifre);
}

void giris()
{
	string kullanici_adi,sifre;
	
	cout << "Kullanici Adi: ";
	cin >> kullanici_adi;
	
	cout << "Sifre: ";
	cin >> sifre;
	
	if (dosya_ara(kullanici_adi,sifre))
	{
		cout << "Giris Basarili..." << endl;
		kullanici_UI();
	}
}

void dosya_yaz(string kullanici_adi,string eposta,string sifre)
{
	ofstream dosya;
	dosya.open("KullanýcýBilgileri.txt",fstream::app);
	
	dosya << "Kullanici Adi: " << kullanici_adi << "\n";
	dosya << "E-posta: " << eposta << "\n";
	dosya << "Sifre: " << sifre << "\n";
	
	dosya.close();
}

bool dosya_ara(string kullanici_adi,string sifre)
{
	string satir;
	ifstream dosya;
	dosya.open("KullanýcýBilgileri.txt");
	
	if (dosya.is_open())
	{
		while (getline(dosya,satir))
		{
			
			
			
		}
	}
	
	
	
	
}











