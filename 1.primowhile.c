#include <stdio.h>
#include <conio.h>

int primo (int n);

int main()
 {
    int i,n,a; 
    printf("Dime un numero entero: ");
    scanf("%d",&n);
    i=1;
	while(i<=n)
	{
	
		a=primo(i);
		if(a==0)
		{
			printf("\n %d",i);
		}
		i++;
		
	}



getch(); 
return 0;

}

int primo (int n)
{
	int i,c,x;
	c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
	    { 
	    	c=c+1;
		}
	}
	if(c==2)
	{
		x=0;
	}
	else
	{
		x=1;
	}
	return x;
	 
}
