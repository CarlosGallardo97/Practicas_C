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
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Ingrese el valor del espacio [%d][%d]: ",i,j);
			scanf("%d",&cad[i][j]);	
		}
	}
	printf("\n\n");
	printf("La matriz es la siguiente: \n\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			printf("   %d   ",cad[i][j])	;
		}
		printf("\n");
	}
	
	
getch();
return 0;
}

