#include <iostream>

using namespace std;

void menuGoster();
void ogrenciBilgisiAl(string ad[], int numara[],float vize[],float final[],int sinifMevcudu);
float ortalamaHesapla(float vize,float final);
char harfNotuHesapla(float ortalama);
void ogrencileriListele(string ad[], int numara[],float vize[],float final[],int sinifMevcudu, float ortalamalar[],char harfNotlar[]);
float sinifOrtalamasi(float ortalamalar[],int sinifMevcudu);
int enBasariliOgrenci(float ortlamalar[],int sinifMevcudu);

int main(int agrv, char ** agrc)
{
	int secim, sinifMevcudu=0;
	string ad[50]; 
	int numara[50];
	float vize[50],final[50],ortalamalar[50];
	char harfNotlar[50];
		
	while (true)
	{
		menuGoster();
		cout << "Secim: ";
		cin >> secim;
		
		if (secim == 1) // Öðrenci Bilgilerini Gir
		{
			cout << "Kac Ogrenci Girilecek: ";
			cin >> sinifMevcudu;
			
			ogrenciBilgisiAl(ad, numara,vize,final,sinifMevcudu);
			
			for (int i=0;i<sinifMevcudu;i++)
			{
				float ortalama = ortalamaHesapla(vize[i] ,final[i]);
				ortalamalar[i] = ortalama;
				
				char harfNot = harfNotuHesapla(ortalama);
				harfNotlar[i] = harfNot;
				
			}	
		}
		else if (secim == 2) // Öðrencileri Listele
		{
			ogrencileriListele(ad, numara,vize,final,sinifMevcudu,ortalamalar,harfNotlar);
		}
		else if (secim == 3) // Sýnýf Ortalamasý
		{
			float sinifOrt = sinifOrtalamasi(ortalamalar,sinifMevcudu);
			cout << "==== SINIF ORTALAMASI ====\n\n";
			cout << "Sinif Ortalamasi: " << sinifOrt;
		}
		else if (secim == 4) // En Baþarýlý Öðrenci
		{
			int idx = enBasariliOgrenci(ortalamalar,sinifMevcudu);
			cout << "==== EN BASARILI OGRENCI ====\n\n";
			cout << "Ad: " << ad[idx] << endl;
			cout << "Numara: " << numara[idx] << endl;
			cout << "Vize: " << vize[idx] << endl;
			cout << "Final: " << final[idx] << endl;
			cout << "Ortalama: " << ortalamalar[idx] << endl;
			cout << "Harf Notu: " << harfNotlar[idx] << endl;
		}
		else if (secim == 5) // Çýkýþ
		{
			cout << "Cikiliyor..." << endl;
			break;
		}
		else
		{
			cout << "Gecersiz Islem Girdiniz" << endl;
		}
	}
}

void menuGoster()
{
	cout << "===== OGRENCI BILGI SISTEMI =====\n\n1- Bilgi Gir\n2- Listele\n3- Sinif Ortalamasi\n4- En Basarili Ogrenci\n5- Cikis\n" << endl;
}


void ogrenciBilgisiAl(string ad[], int numara[],float vize[],float final[],int sinifMevcudu)
{
	for (int i=0;i<sinifMevcudu;i++)
	{
		cout << i+1 << ". Ogrencinin Adi: ";
		cin >> ad[i];
		
		cout <<"Numara: ";
		cin >> numara[i];
		
		cout <<"Vize: ";
		cin >> vize[i];
		
		cout <<"Final: ";
		cin >> final[i];
		
		cout << "\n";
	}
}

void ogrencileriListele(string ad[], int numara[],float vize[],float final[],int sinifMevcudu, float ortalamalar[],char harfNotlar[])
{
	cout << "==== OGRENCILER ====\n\n";
	
	for (int i=0;i<sinifMevcudu;i++)
	{
		cout << i+1 << ". Ogrenci" << endl;
		cout << "Ad: " << ad[i] << endl;
		cout << "Numara: " << numara[i] << endl;
		cout << "Vize: " << vize[i] << endl;
		cout << "Final: " << final[i] << endl;
		cout << "Ortalama: " << ortalamalar[i] << endl;
		cout << "Harf Notu: " << harfNotlar[i] << endl;
		cout << "-------------------------" << endl;
	}
}

float ortalamaHesapla(float vize,float final)
{
	float ortalama = (vize * 0.40) + (final * 0.60);
	
	return ortalama;
}

char harfNotuHesapla(float ortalama)
{
	if ( 90.0 <= ortalama && ortalama <= 100.0 ) return 'A';
	else if ( 80.0 <= ortalama && ortalama <= 89.9 ) return 'B';
	else if ( 70.0 <= ortalama && ortalama <= 79.9 ) return 'C';
	else if ( 60.0 <= ortalama && ortalama <= 69.9 ) return 'D';
	else return 'F'; 
}

float sinifOrtalamasi(float ortalamalar[],int sinifMevcudu)
{
	float ort = 0 , sinifOrt;
	
	for (int i=0;i<sinifMevcudu;i++)
	{
		ort += ortalamalar[i];
	}
	
	sinifOrt = ort / sinifMevcudu;
	
	return sinifOrt;
}
int enBasariliOgrenci(float ortalamalar[],int sinifMevcudu)
{
	float ort[50];
	// Dizi Kopyalama
	for (int i=0;i<49;i++)
	{
		ort[i] = ortalamalar[i];
	}
	
	for (int i=0;i<sinifMevcudu;i++)
	{			
		// alýnan deðer = ort[i]
	
		for (int j=0;j<sinifMevcudu;j++)
		{
			// karþýlaþtýrýlan deðer = ort[j]
			
			if (i == j) continue;
			if (ort[i] == -1 || ort[j] == -1) continue;
			
			if (ort[i] >= ort[j])
			{
				ort[j] = -1;
			}
			else if (ort[i] < ort[j])
			{
				ort[i] = -1;
				continue;
			}
		}
	}
	
	for (int i=0;i<sinifMevcudu;i++)
	{
		if (ort[i]==-1) continue;
		else return i;
	}
}
