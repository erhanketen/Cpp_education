#include <iostream>
#include <cmath>

using namespace std;

int main(int agrc , char ** agrv)
{
	cout  <<
	
	"----HIPOTENUS ALMA PROGRAMI----\n\n"  <<
	
	endl;
	
	cout  <<
	
	"2 Kenar Uzunlugu Gir: "  <<
	
	endl;
	
	int kenar1,kenar2;
	
	cin >> kenar1;
	cin >> kenar2;
	
	double hipotenus =  sqrt( pow(kenar1 , 2) + pow(kenar2 , 2) );
	
	cout  <<
	
	"Hipotenus = "  <<
	hipotenus  <<
	
	endl;
	
	return 0; 
	
}


