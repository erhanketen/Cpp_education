#include <iostream>

using namespace std;

int main(int agrc,char**agrv)
{
	int i,j,row;
	string star = "**";
	
	cout<<"Satir Sayisini Girin: ";
	cin>> row;
	
	cout << "*" << endl;
	
	
	for (i=1;i<=row;i++)
	{
		string starow;
		for (j=1;j<=i;j++)
		{
			starow.append(star);
		}
		cout << starow << endl;
		
	}	

}



