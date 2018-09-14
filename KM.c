#include <stdio.h>
#include <conio.h>


int main() 
{
	float km,pf,mf,ma;
	mf=3000;
	printf("Cuantos kilometros se recorrieron: ");
	scanf("%f",&km);
	if(km<=300)
	{
		pf=mf*1.16;
		printf("El precio final a pagar es: %.2f",pf);
	}
	else
	{
		if(km>300 && km<=1000)
		{
			ma=(km-300)*1000;
			pf=(ma+mf)*1.16;
			printf("El precio final a pagar es: %.2f",pf);
		}
		else
		{
			ma=(km-300)*1500;
			pf=(ma+mf)*1.16;
			printf("El precio final a pagar es: %.2f",pf);
		}
	
	}
	
	getch();
	return 0;
}
