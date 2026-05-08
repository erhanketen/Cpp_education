#include <iostream>

using namespace std;

int main(int agrc,char**agrv)
{
	int bas,son,i;
	int toplam = 0;
	
	cout<< "baslangic noktasini giriniz: " ;
	cin>>bas;
	
	cout<< "bitis noktasini giriniz: " ;
	cin>>son;
	
	for (i=bas+1;i<son;i++)
	{
		toplam += i;
	}
	
	cout<<"Sonuc: "<<toplam<<endl;
	
	
}


