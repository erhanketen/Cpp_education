#include <iostream>

using namespace std;

int main(int agrc,char**agrv)
{
	cout << "---Ortamalama Hesaplama Programi---\n" << endl;

	double ort = 1;
	double toplam = 0;
	
	for (int i=1;i<=10;i++)
	{
		double a;
		cout << i << "'inci sayiyi girin: ";
		cin >> a;
		
		toplam += a;
		
	}
	
	ort = toplam / 10;
	
	cout << "Ortalama = " << ort << endl;
	
	return 0;
}
