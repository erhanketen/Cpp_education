#include <iostream>
#include <fstream>

using namespace std;

void kayit();
void bilgiler();
void dosya_yaz(string isim,float vize,float odev,float final,float ortalama);
float ort_hesapla(float vize,float odev,float final);

int main(int agrc,char** agrv)
{
	cout << "==== OGRENCI SISTEMI ====\n" << endl;
	while (true)
	{
		int secim;
		cout << "-ISLEMLER-\n1- Kayit\n2- Ogrenci Bilgileri\n3- Cikis\n--> ";
		cin >> secim;
		
		if (secim == 1)
		{
			kayit();
		} 
		else if (secim == 2)
		{
			bilgiler();
		}
		else if (secim == 3)
		{
			cout << "Cikiliyor..." << endl;
			break;
		}
		else
		{
			cout << "Gecersiz Islem Secimi..." << endl;
		}
	}
}

void kayit()
{
	string isim;
	float vize,odev,final,ortalama;
	
	int sayi;
	cout << "Kac Ogrenci Girilecek: ";
	cin >> sayi;
	
	for (int i=0;i<sayi;i++)
	{
		cout << "Isim: ";
		cin >> isim;
		
		cout << "Vize: ";
		cin >> vize;
		
		cout << "Odev: ";
		cin >> odev;
		
		cout << "Final: ";
		cin >> final;
		
		ortalama = ort_hesapla(vize,odev,final);
		dosya_yaz(isim,vize,odev,final,ortalama);
	}	
}

void dosya_yaz(string isim,float vize,float odev,float final,float ortalama)
{
	ofstream dosya;
	dosya.open("Bilgiler.txt",fstream::app);
	dosya << "Isim: " << isim << "\n";
	dosya << "Vize: " << vize << "\n";
	dosya << "Odev: " << odev << "\n";
	dosya << "Final: " << final << "\n";
	dosya << "Ortalama: " << ortalama << "\n";
	dosya <<"--------------------------" << endl;
	dosya.close();
}

float ort_hesapla(float vize,float odev,float final)
{
	float ortalama = (vize*0.40)+(odev*0.10)+(final*0.50);
	return ortalama;
}

void bilgiler()
{
	string satir;
	ifstream dosya;
	dosya.open("Bilgiler.txt");
	if (dosya.is_open())
	{
		while (getline(dosya,satir))
		{
			cout << satir << endl;
		}
	}
}













