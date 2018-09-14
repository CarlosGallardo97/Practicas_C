#include <stdio.h>
#include <conio.h>

int main ()
{
 int i,n,s;
 s=1;
 i=1;
 printf("Dime que tabla de multiplicar quieres ver: ");
 scanf("%d",&n); 
 while(i<=10)
 {
 	s=n*i;
 	printf("\n%d",s);
 	i++;
 }
 getch();
 return 0;
} 
