#include <iostream>
using namespace std;

int main(int agrv, char ** agrc)
{
	int sinifMevcudu = 6;
	float ortalamalar[50];
	ortalamalar[0] = 40;
	ortalamalar[1] = 30;
	ortalamalar[2] = 20;
	ortalamalar[3] = 45;
	ortalamalar[4] = 90;
	ortalamalar[5] = 70;
	
	
	float ort[50];
	// Dizi Kopyalama
	for (int i=0;i<49;i++)
	{
		ort[i] = ortalamalar[i];
	}
	
	for (int i=0;i<sinifMevcudu;i++)
	{			
		// alýnan deðer = ort[i]
	
		for (int j=0;j<sinifMevcudu;j++)
		{
			// karþýlaþtýrýlan deðer = ort[j]
			
			if (i == j) continue;
			if (ort[i] == -1 || ort[j] == -1) continue;
			
			if (ort[i] >= ort[j])
			{
				ort[j] = -1;
			}
			else if (ort[i] < ort[j])
			{
				ort[i] = -1;
				continue;
			}
		}
	}
	
	for (int i=0;i<sinifMevcudu;i++)
	{
		if (ort[i]==-1) continue;
		else
		{
			cout << "INDX: " << i << endl;
			cout << ortalamalar[i] << endl;
			break;
		}
	}
	
	
}
