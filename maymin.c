#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int tam,i;
	char cad[50];
	printf("Dime una cadena(frase), en letras mayusculas: ");
	gets(cad);
	tam=strlen(cad);
	for(i=0;i<=tam;i++)
	{
	putchar (tolower(cad[i]));
	}
	getch();
	return 0;
}
