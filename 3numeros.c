#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,c;
	printf("Dime un el primer numero entero: ");
	scanf("%d",&a);
	printf("Dime un el segundo numero entero: ");
	scanf("%d",&b);
	printf("Dime un el tercer numero entero: ");
	scanf("%d",&c);
	if(a==b || a==c || b==c)
	{
		printf("Error: Tienen que se 3 numeros diferentes \n");
	}
	else
	{
		if(a>b)
		{
			if(a>c)
			{
				if(b>c)
				{
					printf(" %d,%d,%d \n",a,b,c);
				}
				else
				{
					printf(" %d,%d,%d\n",a,c,b);
				}
			}
			else
			{
				printf(" %d,%d,%d\n",c,a,b);
			}
		}
		else
		{
			if(a>c)
			{
				printf(" %d,%d,%d\n",b,a,c);
			}
			else
			{
				if(b>c)
				{
					printf(" %d,%d,%d\n",b,c,a);
				}
				else
				{
					printf(" %d,%d,%d\n",c,b,a);
				}
			}
			
		}
	}
	getch();
	return 0;
}
