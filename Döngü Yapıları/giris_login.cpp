#include <iostream>

using namespace std;

int main(int agrc,char**agrv)
{
	string username = "admin", password = "admin123",in_user,in_password;
	int deneme;
	
	while (true)
	{
		cout << "Kullanici Adinizi Giriniz: " ;
		cin >> in_user;
		
		cout << "Sifrenizi Giriniz: " ;
		cin >> in_password;
		
		if ( (in_user == username) && (in_password == password) )
		{
			cout << "Giris Basarili..." << endl;
			break;
		}
		else
		{
			cout << "Giris Basarisiz..." << endl;
			deneme++;
			
			if (deneme == 3)
			{
			cout << "Deneme hakkiniz bitti..." << endl;
			break;
			}
			
		}
	}
	
	return 0;
}
