#include <iostream>

using namespace std;

int main(int agrc,char**agrv)
{
	short A = 54;
	short B = 25;
	short C = 12;
	
	double karisim1 = (A+B) * 0.8;
	double karisim1_seker = ((A*0.35)+(B*0.2)) * 0.8;
	
	double karisim2 = karisim1 + C;
	double karisim2_seker = karisim1_seker + (C*0.44);
	
	double yuzde_oran = (karisim2_seker/karisim2)*100;
	
	cout << "Yuzde Oran: %" << yuzde_oran << endl;
	
	return 0;
	
}



