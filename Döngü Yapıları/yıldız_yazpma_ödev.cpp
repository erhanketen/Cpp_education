#include <iostream>

using namespace std;

int main(int agrc,char**agrv)
{
	int i,j,k,islem;
	string star = "*";
	string space = " ";
	

	while (true)
	{
		cout << "ISLEMLER\n\n(1) Piramit\n(2) Saga Dayali Ucgen\n(3) Baklava Dilimi\n(cikmak icin '0')\n--> ";
		cin >> islem;
	
		if (islem == 0)
		{
			break;
		}
		else if (islem == 1)
		{
			int row;

			cout << "Satir Sayisi Giriniz: ";
			cin >> row;
			

			for (i=1;i<=row;i++)
			{
				string sembol;
				
				for (j=1;j<=row-i;j++)
				{
					sembol.append(space);
						
				}
				
				if (i == 1)
				{
					sembol.append(star);
					cout << sembol << endl;
					continue; 
				}
				
				for (k=1;k<=((2*i)-1);k++)
				{
					sembol.append(star);
				}
				cout << sembol << endl;
			}
		}
			
		else if (islem == 2)
		{
			int row;

			cout << "Satir Sayisi Giriniz: ";
			cin >> row;
			
			for (i=1;i<=row;i++)
			{
				string sembol;
				
				for (j=1;j<=row-i;j++)
				{
					sembol.append(space);
				}
				for (k=1;k<=i;k++)
				{
					sembol.append(star);
				}
				cout << sembol << endl;
			}
			
		}	
		else if (islem == 3)
		{
			
			int row;

			cout << "Satir Sayisi Giriniz: ";
			cin >> row;
			

			for (i=1;i<=row;i++)
			{
				string sembol;
				
				for (j=1;j<=row-i;j++)
				{
					sembol.append(space);
						
				}
				
				if (i == 1)
				{
					sembol.append(star);
					cout << sembol << endl;
					continue; 
				}
				
				for (k=1;k<=((2*i)-1);k++)
				{
					sembol.append(star);
				}
				cout << sembol << endl;
			}
			for (i=row-1;i>0;i--)
			{
				string sembol;
				
				for (j=1;j<=row-i;j++)
				{
					sembol.append(space);
				}
				for (k=1;k<=(2*i)-1;k++)
				{
					sembol.append(star);
				}
				cout << sembol << endl;
			}
		
		}
		else cout << "Gecersiz Islem Girdiniz" << endl;	
		
	}
		
	return 0;	
}




