#include <iostream>

using namespace std;

int main(int argc , char ** argv)
{
	cout  <<
	
	"----KURENIN HACMINI HESAPLAMA----\n\n"  <<
	
	endl;
	
	double yaricap;
	const double PI = 3.14159;
	
	cout<<"Yaricap Giriniz(cm):"<<endl;
	cin >> yaricap;
	
	double hacim = (4.0/3.0) * yaricap * yaricap * yaricap * PI;
	
	cout  <<
	
	"Kurenin Hacmi = "  <<
	hacim  <<
	" cm^3"  <<
	
	endl;

}
