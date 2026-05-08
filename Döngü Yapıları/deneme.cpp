#include <iostream>

using namespace std;

int main(int agrc,char**agrv)
{
	int fak;
	cout << "Faktoriyeli alinacak sayi: " ;
	cin >> fak;

	int fakto = 1;
	for (int i= 2;i<=fak;i++)
	{
		fakto *= i;
	}
	cout << "Faktoriyel = " <<fakto;
}


