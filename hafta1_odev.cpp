#include <iostream>

/*

Bir araba galerisi sattýðý her arabadan %25 kâr elde etmektedir. 
Elde ettiði kârýn %40’ýný maliyetlere ayýrmakta ve kalanýn %30’unu 
çalýþanlarýna komisyon olarak daðýtmaktadýr. Kalan miktar ise galerinin 
net kârý olarak kaydedilmektedir.

Buna göre 200.000 TL’ye satýlan bir arabadan elde edilen toplam kârý, 
maliyetlere ayrýlan miktarý, çalýþanlarýn komisyon miktarlarýný ve 
galerinin satýþtan net kârýný hesaplayan programý yazýnýz

*/


using namespace std;
int main(int argc, char** argv) {
	
	double araba_fiyat = 200000.0;                                    // araba'nýn fiyatý . double çünkü bu deðiþkeni kullanarak bölme iþlemleri yapacaðýz
	double araba_kar = araba_fiyat * 0.25;                           // araba fiyatýný 0.25 ile çarparak %25'i alýnýr.
	double maliyet = araba_kar * 0.40;                              // elde edilen karýn %40'ý alýnýr.
	double komisyon = ( araba_kar - maliyet ) * 0.30;			   // komisyon kalan paradan hesaplandýðý için kar'dan maliyet çýkarýlýr ve bu deðerin %30'u alýnýr.
	double net_araba_kar = araba_kar - ( maliyet + komisyon );    // net kar kalan miktardýr. kar'dan maliyet ve komisyonu çýkararak elde ederiz.
	
	
	// bu bölüm ekrana yazdýrmaya yarýyor.
	cout<<"Elde Edilen Kar:"<<araba_kar<<"TL"<<endl;                      
	cout<<"Maliyetlere Ayrilan Para:"<<maliyet<<"TL"<<endl;
	cout<<"Calisanlara Dagitilan Komisyon:"<<komisyon<<"TL"<<endl;
	cout<<"Elde Edilen Net Kar:"<<net_araba_kar<<"TL"<<endl;
	
	
	return 0;
}
