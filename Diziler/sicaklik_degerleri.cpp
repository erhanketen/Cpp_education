//ÖDEV
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int agrv,char**agrc)
{
	srand(time(0));
	
	// 50 sýcaklýk deðeri alýnacak:
	int sicakliklar[50];
	
	for (int i = 0; i<49;i++)
	{
		int sayi = rand() % 101 - 20;
		sicakliklar[i] = sayi;
	}
	
	// A) Ortalama Sýcaklýk Hesabý:
	cout << "ORTALAMA SICAKLIK HESABI\n" << endl;
	
	int toplam = 0;
	
	for (int i=0;i<49;i++)
	{
		toplam+=sicakliklar[i];
	}
	double ort = toplam / 50;
	
	cout << "Ortalama Sicaklik: " << ort << endl;
	
	// B) Kritik Gün Analizi:
	cout << "\n\n--------------------------------------------------------" << endl;
	cout << "KRITIK GUN ANALIZI\n" << endl;
	
	int kirk_sayaci = 0, sifir_sayaci = 0, yirmibes_sayaci = 0;
	
	for (int i=0;i<49;i++)
	{
		if (sicakliklar[i] < 0) 
		{
			sifir_sayaci++;
		}	
		else if (sicakliklar[i] == 25)
		{
			yirmibes_sayaci++;
		} 		
		else if (sicakliklar[i] > 40)
		{
			kirk_sayaci++;
		}			
	}
	
	cout << ">40 derece gun sayisi " << kirk_sayaci << endl;
	cout << "<0 derece gun sayisi " << sifir_sayaci << endl;
	cout << "25 derece gun sayisi " << yirmibes_sayaci << endl;
	
	// C) En Uzun Artýþ Serisi:
	cout << "\n\n--------------------------------------------------------" << endl;
	cout << "EN UZUN ARTIS SERISI\n" << endl;
	
	int sayac = 0;
	int artis_serisi[50];
	
	for (int i=0;i<49;i++)
	{
		if ( (sicakliklar[i+1] - sicakliklar[i]) > 0 )
		{
			sayac++;
			artis_serisi[i] = -1;
		}
		else
		{
			artis_serisi[i] = sayac;
			sayac = 0;
		}
	}
	
	for (int i=0;i<49;i++)
	{
		if (artis_serisi[i] == -1) continue;
		
		for (int j=0;j<49;j++)
		{
			if (artis_serisi[i] > artis_serisi[j])
			{
				artis_serisi[j] = -1;
			}
			else if (artis_serisi[i] == artis_serisi[j])
			{
				continue;
			}
			else
			{
				artis_serisi[i] = -1;
			}
		}
	}
	
	for (int i=0;i<49;i++)
	{
		if (artis_serisi[i] != -1 ) 
		{
			cout <<"En Uzun Artis Serisi: " <<artis_serisi[i] << endl;
			break;
		}
		
	}
	
	// D) Ani Deðiþim Analizi:
	cout << "\n\n--------------------------------------------------------" << endl;
	cout << "ANI DEGISIM ANALIZI\n" << endl;
	
	for (int i=0;i<49;i++)
	{
		if ( (sicakliklar[i+1]-sicakliklar[i]) >= 15 )
		{
			cout << i << ". gun ve " << i+1 << ". gun arasinda " << (sicakliklar[i+1]-sicakliklar[i]) <<  " derecelik ani degisim gozlemlendi" << endl;
		}
	}
	
	// E) Tekrar Eden Deðerler:
	cout << "\n\n--------------------------------------------------------" << endl;
	cout << "TEKRAR EDEN DEGERLER\n" << endl;
	
	int tekrarlar[50];
	
	for (int i = 0;i<49;i++)
	{
		for (int j=0;j<49;j++)
		{
			if (sicakliklar[i] == sicakliklar[j])
			{
				tekrarlar[i]++;
			}	
		}
	}
	
	for (int i=0;i<49;i++)
	{
		if (tekrarlar[i] >= 50) continue;
		
		cout << sicakliklar[i] << " derece: " << tekrarlar[i] << " kere tekrar etti." << endl;
	}
	
}

