#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int k,aux,r1,c1,r2,c2,i,j,cad1[50][50],cad2[50][50],cad3[50][50];
	printf("Dime el numero de renglones que quieres la matriz 1: ");	
	scanf("%d",&r1);
	printf("Dime el numero de columnas que quieres la matriz 1: ");
	scanf("%d",&c1);	
	printf("Dime el numero de renglones que quieres la matriz 2: ");
	scanf("%d",&r2);
	printf("Dime el numero de columnas que quieres la matriz 2: ");
	scanf("%d",&c2);
	if(c1==r2)
	{
	printf("Dime los numeros de la matriz 1: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Ingrese el valor del espacio [%d][%d]: ",i,j);
			scanf("%d",&cad1[i][j]);	
		}
	}
	printf("Dime los numeros de la matriz 2: ");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Ingrese el valor del espacio [%d][%d]: ",i,j);
			scanf("%d",&cad2[i][j]);	
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			cad3[i][j]=0;
			for(k=0;k<c1;k++)
			{
				aux=cad1[i][k]*cad2[k][j];
				cad3[i][j]=cad3[i][j]+aux;
			}
		}
	}
	printf("\n\n");
	printf("El resultado de la multiplicacion es el siguiente: \n\n");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			
			printf("   %7.2d   ",cad3[i][j])	;
		}
		printf("\n");
	}
    }
	else
	{
		printf("Error, para multiplicar matrices el numero de columnas de la primera y renglones de la segunda debe ser igual ");
	}
	
getch();
return 0;
}

