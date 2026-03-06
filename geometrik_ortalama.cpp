#include <iostream>
#include <cmath>

using namespace std;

int main(int agrc,char**agrv)
{
	cout<<
	
	"----GEOMETRIK ORTALAMA HESAPLAMA ARACI----\n\n"<<
	
	endl;
	
	int sayi1,sayi2,sayi3,sayi4,sayi5;
	
	cout<<
	
	"Sayi-1:"    <<
	"\nSayi-2:"  <<
	"\nSayi-3:"  <<
	"\nSayi-4:"  <<
	"\nSayi-5:"  <<
	
	endl;
	
	cin >> sayi1;
	cin >> sayi2;
	cin >> sayi3;
	cin >> sayi4;
	cin >> sayi5;
	
	double geometrik_ortalama = pow(sayi1*sayi2*sayi3*sayi4*sayi5 , 5);
	
	cout<<
	
	"Geometrik Ortalama: " <<
	geometrik_ortalama     <<
	
	endl;
	
	return 0;
	
	
	
	
}
