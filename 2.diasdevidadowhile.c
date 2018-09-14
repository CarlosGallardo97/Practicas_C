#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int anio1,anio2,mes1,mes2,dia1,dia2,total=0,i;
	printf("Dime en que anio naciste: ");
	scanf("%d",&anio1);
	printf("\nDime en que mes naciste: ");
	scanf("%d",&mes1);
	printf("\nDime en que dia naciste: ");
	scanf("%d",&dia1);
	printf("\nDime que anio es actualmente: ");
	scanf("%d",&anio2);
	printf("\nDime que mes es actualmente: ");
	scanf("%d",&mes2);
	printf("\nDime que dia es actualmente: ");
	scanf("%d",&dia2);
	i=anio1;
	do // ANIOS VIVIDOS
	{
		if(i%4==0)
		{
			total=total+366;
		}
		else
		{
			total=total+365;
		}
		i++;
	}
	while(i<=anio2-2);
	i=mes1-1;
	do //PRIMEROS MESES VIVIDOS
	{
		switch(i)
		{
		case 1:
		case 3: 
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			total=total+31;
		break;
		case 2:
			if(anio1%4==0)
			total=total+29;
			else
			total=total+28;
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			total=total+30;
		break;
		}
		i++;
	}
	while(i<=12);
	i=1;
	do //ULTIMOS MESES VIVIDOS
	{
		switch(i)
		{
		case 1:
		case 3: 
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			total=total+31;
		break;
		case 2:
			if(anio1%4==0)
			total=total+29;
			else
			total=total+28;
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			total=total+30;
		break;
		}
		i++;
	}
	while(i<=mes2-1);
	
	switch(mes1) // PRIMEROS DIAS VIVIDOS
	{
		case 1:
		case 3: 
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			total=total+(31-dia1);
			break;
		case 2:
			if(anio1%4==0)
			total=total+(29-dia1);
			else
			total=total+(28-dia1);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			total=total+(30-dia1);
			break;
	}
	total=total+dia2; //ULTIMOS DIAS VIVIDOS
	printf("\nEl total de dias vividos que tienes es de: %d",total);
	getch();
	return 0;
}
