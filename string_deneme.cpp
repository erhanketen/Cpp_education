#include <iostream>
#include <string>
using namespace std;

int main(int argc, char ** argv)
{
	string isim , soyisim , ulke;
	cout<<
	"Isim:\n"
	<<
	"Soyisim:\n"
	<<
	"Nerelisiniz:\n"
	<<endl;
	
	cin >> isim;
	cin >> soyisim;
	cin >> ulke;
	
	cout<<"kaydediliyor..."<<endl;
	
	cout<<
	"Isminiz: "<<isim<<
	"\nSoyisminiz: "<<soyisim<<
	"\nUkeniz: "<<ulke<<
	endl;
	
	string isim_soyisim = isim.append(" ").append(soyisim);
	
	cout<<"Isminiz ve Soyisminizin Uzunlugu: "<<
	isim_soyisim.length()<<
	"\nUlkenizin Uzunlugu: "<<
	ulke.length()<<endl;
	
	int isim_uzunluk = isim.length();
	int ulke_uzunluk = ulke.length();
	
	cout<<"Toplam Uzunluk: "<<
	isim_uzunluk + ulke_uzunluk << endl;
	
}
