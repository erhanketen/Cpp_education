#include <iostream>


using namespace std;

int main(int agrc , char ** agrv)
{
	cout  <<
	
	"----ORTALAMA HIZ HESAPLAMA ARACI----\n\n"  <<
	
	endl;
	
	cout  <<
	
	"Gidilen Yolu Girin:(m)\n"  <<
	"Gecen Sureyi Girin:(s)"  <<
	
	endl;
	
	double yol,sure;
	
	cin >> yol;
	cin >> sure;
	
	double hiz = yol / sure;
	
	cout  << 
	
	"Hiz = "  <<
	hiz  <<
	" m/s"  <<
	
	endl;
		
}
