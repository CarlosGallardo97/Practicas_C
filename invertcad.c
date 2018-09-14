#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int tam,largo,i,j;
	char cad1[50],cad2[50];
	printf("Dime una cadena: ");
	gets(cad1);
	tam=strlen(cad1);
	largo=tam;
	i=0;
	while(i<largo)
	{
		cad2[i]=cad1[tam-1];
		i++;
		tam--;
	}
	cad2[i]='\0';
	printf("La cadena invertida es: %s", cad2);
	getch();
	return 0;
}

