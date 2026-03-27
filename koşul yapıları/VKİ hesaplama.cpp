#include <iostream>

using namespace std;

int main(int argc,char**agrv)
{
	cout << "----VUCUT KITLE INDEKSI HESAPLAMA----\n" << endl;
	
	double kilo,boy;
	
	cout << "Kilonuzu Girin(kg): ";
	cin >> kilo;
	
	cout << "Boyunuzu Girin(cm): ";
	cin >> boy;
	
	double vki = kilo / ((boy/100)*(boy/100));
	
	cout << "VKI'niz: " << vki << endl;
	
	if (vki <= 18.5)
	{
		cout << "Zayif" << endl;
	}
	else if ( 18.5 < vki and vki <= 24.9)
	{
		cout << "Normal" << endl;
	}
	else if ( 25.0 < vki and vki <= 29.9)
	{
		cout << "Fazla Kilolu" << endl;
	}
	else if ( 30.0 < vki and vki<= 39.9)
	{
		cout << "Obez" << endl;
	}
	else if ( 40.0 < vki )
	{
		cout << "Morbid Obez" << endl;
	}
	
	return 0;
	
}
