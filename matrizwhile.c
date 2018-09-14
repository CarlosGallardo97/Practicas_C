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
	while(i<n)
	{
		j=0;
		while(j<m)
		{
			printf("Ingrese el valor del espacio [%d][%d]: ",i,j);
			scanf("%d",&cad[i][j]);	
			j++;
			
		}
	i++;
	}
	printf("\n\n");
	printf("La matriz es la siguiente: \n\n");
	i=0;
	j=0;
	while(i<n)
	{
		j=0;
		while(j<m)
		{
			
			printf("   %d   ",cad[i][j])	;
			j++;
		}
		printf("\n");
		i++;
	}
	
	
getch();
return 0;
}

