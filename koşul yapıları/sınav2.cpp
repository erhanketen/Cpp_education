#include <iostream>

using namespace std;

int main(int agrc,char**agrv)
{
	
	int plaka;
	int ucret;
	double kalan;
	
	cout << "Plakanin son iki hanesi: ";
	cin >> plaka;
	
	kalan = plaka % 5;
	
	if (kalan == 0)
	{
		ucret = 20;
		cout << "Ucret:" << ucret;
	}
	else if ( kalan == 1 or kalan == 2)
	{
		ucret = 25;
		cout << "Ucret: " << ucret * 1.05;
	}
	else
	{
		ucret = 30;
		cout << "Ucret: " << ucret + 5;
	}
	
	
	
	return 0;
}







