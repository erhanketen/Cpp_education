#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
	cout<<"---- ARITMATIK ORTALAMA HESAPLAMA ----\n\n"<<endl;
	
	cout<<
	
	"Sayi-1: "   <<                     // SAYILARI ALCAÐIMIZI BELÝRTÝYORUZ BURADA
	"\nSayi-2: " <<
	"\nSayi-3: " << 
	"\nSayi-4: " <<
	"\nSayi-5: " <<
	
	endl;
	
	
	int sayi1,sayi2,sayi3,sayi4,sayi5;            // BURADA DEÐÝÞKENLERÝ TANIMLIYORUZ
	
	cin >> sayi1;                      
	cin >> sayi2;
	cin >> sayi3;                          // BURADA cin FONKSÝYONU ÝLE KULLANICIDAN SAYILARI ALIYORUZ
	cin >> sayi4;                           
	cin >> sayi5;
	
	
	double aritmatik_ortalama = (sayi1+sayi2+sayi3+sayi4+sayi5)/5.0;        // BURADA ARÝTMATÝK ORTALAMAYI HESAPLAYIP BÝR DEÐÝÞKENE ATIYORUZ. DEÐÝÞKEN DOUBLE ÇÜNKÜ BÖLME VAR.
	 
	cout<<
	
	"Aritmatik Ortalama: " <<                 // BURADA SONUCU EKRANA BASTIRIYORUZ
	aritmatik_ortalama     <<
	
	endl;
	
	return 0;
	
	
	
	
	
	
}
