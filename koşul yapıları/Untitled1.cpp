#include <iostream>

using namespace std;

int main(int agrc,char ** agrv)
{
	cout << "----GIRIS PROGRAMI----\n" << endl;
	
	string user_id = "admin";
	long password = 123456;
	
	string user_id_cin;
	long password_cin;
	
	cout << "Kullanici Adi:" << endl;
	cin >>  user_id_cin;
	
	cout << "Sifre:" << endl;
	cin >>  password_cin;
	
	if (user_id_cin == user_id and password_cin == password)
	{
		cout << "Giris Basarili!" << endl;
	}
	else if (user_id_cin != user_id)
	{
		cout << "Kullanici adi yanlis"<<endl;
	}
	else if (password_cin != password)
	{
		cout << "Sifre Yanlis" << endl;
	}
	else
	{
		cout << "Kullanici adi ve sifre yanlis" << endl;
	}
	
	return 0;
}
