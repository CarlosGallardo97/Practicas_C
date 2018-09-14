#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char cad1[50],cad2[50],res;
	printf("Dime la primer cadena: ");
	gets(cad1);
	printf("Dime la segunda cadena: ");
	gets(cad2);
	res=strcmp(cad1,cad2);
	if(res==0)
	{
		printf("Las cadenas son iguales");
	}
	else
	{
		if(res<0)
		{
			printf("La primera cadena es menor que la segunda");
		}
		else
		{
			printf("La primera cadena es mayor que la segunda");
		}
	}
	getch();
	return 0;
}
	

