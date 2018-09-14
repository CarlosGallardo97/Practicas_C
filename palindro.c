#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>
#include <ctype.h>

int main()
{
int tam,largo,i,res,k;
	char cad1[50],cad2[50],cad3[50];
	printf("Dime una cadena: ");
	gets(cad1);
	tam=strlen(cad1);
	for(i=0;i<=tam;i++)
	{
		cad1[i]=tolower(cad1[i]);
	}
	k=0;
	for(i=0;i<tam;i++)
	{
		if(cad1[i]!=32)
		{
			cad2[k]=cad1[i];
			k++;
		}
	}
	tam=strlen(cad2);
	largo=tam;
	i=0;
	while(i<largo)
	{
		cad3[i]=cad2[tam-1];
		i++;
		tam--;
	}
	cad3[i]='\0';
	res=strcmp(cad2,cad3);
	if(res==0)
	{
		printf("La cadena es palindromo");
	}
	else
	{
		printf("La cadena NO es palindromo");
	}
	getch();
	return 0;
}
