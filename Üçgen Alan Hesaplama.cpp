#include <iostream>
#include <cmath>

using namespace std;

int main(int agrc , char ** agrv)
{
	cout  <<
	
	"----UCGEN ALAN HESAPLAMA----\n\n"  <<
	
	endl;
	
	cout  <<
	
	"Uc tane kenar uzunlugu girin: "  <<
	
	endl;
	
	int kenar1 , kenar2 , kenar3;
	
	cin >> kenar1;
	cin >> kenar2;
	cin >> kenar3;
	
	double s = (kenar1 + kenar2 + kenar3) / 2;
	
	double alan = sqrt(s * (s - kenar1) * (s - kenar2) * (s - kenar3)); 
	
	cout  <<
	
	"Ucgenin Alani: "  <<
	alan  <<
	
	endl;
	
	
	
	
	
	
	
	
}

