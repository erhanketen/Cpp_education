#include <iostream>
#include <cmath>

using namespace std;

int main(int agrc,char ** agrv)
{
	cout << "----KOK BULMA PROGRAMI----" << endl;
	
	double a,b,c;
	
	cout << "Denklemin 'a'-sini Giriniz:" << endl;
	cin >> a;
	
	cout << "Denklemin 'b'-sini Giriniz:" << endl;
	cin >> b;
	
	cout << "Denklemin 'c'-sini Giriniz:" << endl;
	cin >> c;
	
	double delta = (b*b)-4*a*c;
	

	double x1 = (-b + pow(delta,0.5) ) / 2 *a ;
	double x2 = (-b - pow(delta,0.5) ) / 2 *a  ;
	
	
	if (delta < 0)
	{
		cout << "Denklemin Reel Sayi Koku Yoktur." << endl;
	}
	else if (delta == 0)
	{
		cout << "Denklemin Çift Katli Koku: " << x1 << endl;
	}
	else
	{
		cout << "Denklemin Birinci Koku:" << x1 << "\nDenklemin Ikinci Koku:" << x2 << endl;
	}
	
	
	
	
	
	
	
}
