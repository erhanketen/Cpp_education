#include <iostream>
#include <locale>

using namespace std;

int main(int agrc,char**agrv)
{
	setlocale(LC_ALL,"Turkish");
	
	int islem;
	
	cout << "Ýþlem Seçiniz\n(1) Toplama\n(2)Çýkarma\n(3)Çarpma\n(4)Bölme";
	cin >> islem;
	
	double s1,s2;
	
	cout<< "Birinci Sayý: ";
	cin >> s1;
	
	cout << "Ýkinci Sayý";
	cin >> s2;
	
	switch (islem)
	{
		case 1:
			cout << "Sonuç: " << s1+s2;
			break;
		case 2:
			cout << "Sonuç: " << s1-s2;
			break;
		case 3:
			cout << "Sonuç: " << s1*s2;
			break;
		case 4:
			cout << "Sonuç: " << s1/s2;
			break;
	}
	
	return 0;
	
}









