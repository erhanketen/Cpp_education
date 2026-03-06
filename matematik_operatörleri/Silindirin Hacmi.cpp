#include <iostream>
#include <cmath>

using namespace std;

int main(int agrc, char ** agrv )
{
	cout  <<
	
	"----SILINDIRIN HACMI HESAPLAMA----\n\n"  <<
	"Yukseklik Girin(cm):\n"  <<
	"Yaricap Girin(cm):\n"  <<
	
	endl;
	
	double pi = 3.14159;
	double yukseklik,yaricap;
	
	cin >> yukseklik;
	cin >> yaricap;
	
	double hacim = pi * pow(yaricap , 2) * yukseklik;
	
	cout  <<
	
	"Silindirin Hacmi = "  <<
	hacim  <<
	" cm^3"  <<
	
	endl;
	
	
	
	
}
