#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float sal,pe,pf,sm,sar,cf,por;
    char ta;
    printf("   Dime que tipo de aportacion decidiste\n   Cuota fija=c       Porcentaje=p  \n");
    fflush(stdin);
	scanf("%c",&ta);
    printf("Dime el salario base: ");
    scanf("%f",&sal);
    printf("Dime el porcentaje que la empresa aportara: ");
    scanf("%f",&pe);
    pf=(pe/100)*sal;
    if(ta=='c')
    {
    	printf("Dime el valor de la cuota fija:  ");
    	scanf("%f",&cf);
    	sm=sal-cf;
    	sar=pf+cf;
	}
	else
	{
		printf("Dime el porcentaje que decidio aportar :  ");
		scanf("%f",por);
		sm=sal*1-(por/100);
    	sar=pf+(por/100)*sal;
	}
	printf("El salario mensual es de : %.2f\n",sm);
	printf("El aporte total mensual es de : %.2f\n",sar);
    system("PAUSE");
    return EXIT_SUCCESS;
}

