#include <stdio.h>
#include <conio.h>

int main() 
{
	int m,a;
	float nh;
	char ed;
	printf("Dime cual es tu porcentaje de nivel de hemoglobina: ");
	scanf("%f",&nh);
	printf("Su edad es mayor a un anio?\n        s=si y n=no ");
	fflush(stdin);
	scanf("%c",&ed);
	if(ed=='s')
	{
		printf("Dime cuantos anios tienes: ");
		scanf("%d",&a);
		if(a<=5 && a>=1)
		{
			if(nh<15 && nh>11.5)
			{
				printf("El resultado de los analisis es negativo");
			}
			else
			{
				printf("El resultado de los analisis es positivo");
			}
		}
		else
		{
			if(a<=10 && a>5)
		{
		
			if(nh<15.5 && nh>12.6)
			{
				printf("El resultado de los analisis es negativo");
			}
			else
			{
				printf("El resultado de los analisis es positivo");
			}
		}
			else
			{
				if(a<=15 && a>10)
				{
					if(nh<15.5 && nh>12.6)
					{
						printf("El resultado de los analisis es negativo");
					}
					else
					{
						printf("El resultado de los analisis es positivo");
					}
				}	
				else
				{
					printf("Ingrese una edad valida");
				}		
			}
		}
	}
	else 
	{
		printf("Dime cuantos meses tienes: ");
		scanf("%d",&m);
		if(m<=1)
		{
			if(nh<26 && nh>13)
			{
				printf("El resultado de los analisis es negativo");
			}
			else
			{
				printf("El resultado de los analisis es positivo");
			}
		}
		else
		{
			if(m<=6 && m>1)
		{
		
			if(nh<18 && nh>10)
			{
				printf("El resultado de los analisis es negativo");
			}
			else
			{
				printf("El resultado de los analisis es positivo");
			}
		}
			else
			{
				if(m<=12 && m>6)
				{
					if(nh<15 && nh>11)
					{
						printf("El resultado de los analisis es negativo");
					}
					else
					{
						printf("El resultado de los analisis es positivo");
					}
				}	
				else
				{
					printf("Ingrese una edad valida");
				}		
			}
		}
	}

	getch();
	return 0;
}
