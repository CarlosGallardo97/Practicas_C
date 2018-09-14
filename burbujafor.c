#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int arre[50],i,j,n,aux; 
    printf("Dime de cuantos numeros quieres ordenar de menor a mayor: ");
    scanf("%d",&n);
    printf("Dime los numeros: ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arre[i]);                
    }
    for(i=1;i<n;i++)
    {
     for(j=0;j<n-1;j++)
     {
      if(arre[j]>arre[j+1])
      {
       aux=arre[j];
       arre[j]=arre[j+1];
       arre[j+1]=aux;
      }
     }
     }
         
    printf("Los numeros ordenados son: ");
    for(i=0;i<n;i++)
    {
     printf("\n%d",arre[i]);
    }
   getch();
   return 0;
}
