#include <iostream>

using namespace std;

int main(int agrc,	char ** agrv)
{
	cout << "----INDIRIM UYGULAMASI----\n" << endl;
	
	int tutar;
	double indirim;
	
	cout<< "Tutari Giriniz: ";
	cin >> tutar;
	
	if (tutar >= 100 and tutar < 200.0)
	{
		indirim = tutar - (tutar*0.1);
		cout << "%10 indirim kazandiniz!"<<endl;
	}
	else if (tutar >= 200 and tutar < 300)
	{
		indirim = tutar - (tutar * 0.15);
		cout << "%15 indirim kazandiniz!"<<endl;
	}
	else if (tutar >= 300)
	{
		indirim = tutar - (tutar * 0.2);
		cout << "%20 indirim kazandiniz!"<<endl;
	}
	else
	{
		cout << "Indirim Kazanamadiniz"<<endl;
	}
	cout << "Odeyeceginiz tutar: " << indirim;
	
	
	return 0;
	
	
}
