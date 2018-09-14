#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int n,m,i,j,cad[50][50];
	printf("Dime el numero de renglones que quieres la matriz: ");
	scanf("%d",&n);
	printf("Dime el numero de columnas que quieres la matriz: ");
	scanf("%d",&m);
	printf("Dime los numeros de la matriz: ");
	i=0;
	j=0;
	do
	{
		j=0;
		do
		{
			printf("Ingrese el valor del espacio [%d][%d]: ",i,j);
			scanf("%d",&cad[i][j]);	
			j++;
			
		}
		while(j<m);
	i++;
	}
	while(i<n);
	printf("\n\n");
	printf("La matriz es la siguiente: \n\n");
	i=0;
	j=0;
	do
	{
		j=0;
		do
		{
			
			printf("   %d   ",cad[i][j])	;
			j++;
		}
		while(j<m);
		printf("\n");
		i++;
	}
	while(i<n);
	
getch();
return 0;
}
