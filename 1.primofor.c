#include <stdio.h>
#include <conio.h>

int main()
 {
    int i,n,k,b; 
    printf("Dime un numero entero: ");
    scanf("%d",&n);
   
for (i = 2; i <= n; i++)
 {  
 b=1;
	for(k=2;k<i;k++)
	{
	
	if (i%k==0)
	{ 
	b=2; 	
	} 
	}
	if (b==1) 
	{ 
	printf("%d\n ",i); 
	}	 

}


getch(); 
return 0;


}
