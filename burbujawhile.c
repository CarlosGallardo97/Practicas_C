#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int arre[50],i,j,n,aux; 
    printf("Dime de cuantos numeros quieres ordenar de menor a mayor: ");
    scanf("%d",&n);
    printf("Dime los numeros: ");
    i=0;
    while(i<n)
    {
      scanf("%d",&arre[i]);     
      i++;           
    }
    i=1;
    while(i<n)
    {
    j=0;
     while(j<n-1)
     {
      if(arre[j]>arre[j+1])
      {
       aux=arre[j];
       arre[j]=arre[j+1];
       arre[j+1]=aux;
      }
      j++;
     }
     i++;
     }
         
    printf("Los numeros ordenados son: ");
    i=0;
    while(i<n)
    {
     printf("\n%d",arre[i]);
     i++;
    }
   getch();
   return 0;
}
