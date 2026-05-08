#include <iostream>

using namespace std;

int main(int agrv,char**agrc)
{
	int dizi[5];
	
	for (int i = 0;i<5;i++)
	{
		cout << "deger girin: ";
		cin >> dizi[i];
	}
	
	for (int i = 0 ; i<5;i++)
	{
		cout << dizi[i] << endl;
	}
	
	return 0;
}
