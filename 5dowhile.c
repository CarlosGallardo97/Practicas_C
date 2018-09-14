#include <stdio.h>
#include <conio.h>

int main ()
{
 int i,n,s;
 s=1;
 i=1;
 printf("Dime que tabla de multiplicar quieres ver: ");
 scanf("%d",&n); 
 do
 {
 	s=n*i;
 	printf("\n%d",s);
 	i++;
 }
 while(i<=10);
 getch();
 return 0;
} 
