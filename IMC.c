#include <stdio.h>
#include <conio.h>
#include <math.h>


int main() 
{
	float kg,m,IMC;
	printf("Dime cuantos kilogramos pesas: ");
	scanf("%f",&kg);
	printf("Dime cuantos metros mides: ");
	scanf("%f",&m);
	IMC=kg/(pow(m,2));
	if(IMC<16)
	{
		printf("Criterio de ingreso en hospital\n");
	}
	else
	{
		if(IMC<17 && IMC>=16)
		{
			printf("Usted tiene infrapeso\n");
		}
		else
		{
			if(IMC<18 && IMC>=17)
				{
					printf("Usted tiene bajo peso\n");
				}
			else
			{
				if(IMC<25 && IMC>=18)
				{
					printf("Usted tiene un peso normal (Saludable)\n");
				}
				else
				{
					if(IMC<30 && IMC>=25)
					{
						printf("Usted tiene sobrepeso\n");
					}
					else
					{
						if(IMC<35 && IMC>=30)
						{
							printf("Usted tiene sobre peso cronico\n");
						}
						else
						{
							if(IMC<40 && IMC>=35)
							{
								printf("Usted tiene obesidad premorbida\n");
							}
							else
							{
								printf("Usted tiene sobre peso cronico\n");
							}
						}
					}
					
				}
			}
			
		}
	}
	getch();
	return 0;
}
