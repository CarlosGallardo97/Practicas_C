#include <stdio.h>
#include <conio.h>

int main ()
{
 int i,n,s;
 s=1;
 printf("Dime que tabla de multiplicar quieres ver: ");
 scanf("%d",&n); 
 for(i=1;i<=10;i++)
 {
 	s=n*i;
 	printf("\n%d",s);
 	
 }
 getch();
 return 0;
} 
