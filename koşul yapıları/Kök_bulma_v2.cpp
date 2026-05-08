#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(int argc,char**argv)
{
	setlocale(LC_ALL ,"Turkish");
	
	int a,b,c;
	
	cout << "Denklemin Baþ Katsayýsýný Giriniz: ";
	cin >> a;
	
	cout << "Denklemin x'li Terimli Katsayýsýný Giriniz: ";
	cin >> b;
	
	cout << "Denklemin Sabit Sayýsýný Giriniz: ";
	cin >> c;
	
	int delta = (b*b)-(4*a*c);
	
	if (delta < 0)
	{
		cout << "Denklemin Reel Sayý Kökü Bulunmuyor." << endl;
		return 0;
	}
	else
	{
		double x1 = (-b + sqrt(delta)) / 2*a;
		double x2 = (-b - sqrt(delta)) / 2*a;
	
		cout << "Denklemin Birinci Kökü: "<< x1 << endl <<"Denklemin Ýkinci Kökü: "<<x2;
	}
	
	return 0;
	
}

















