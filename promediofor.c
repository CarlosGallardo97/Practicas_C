#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
float arre[50],t,prom;
int n,i,may=0;
printf("Dime de cuantos alumnos quieres sacar el promedio: ");
scanf("%d",&n);
printf("Dime la calificacin de los %d alumnos:  \n",n);
for(i=0;i<n;i++)
{
   
   scanf("%f",&arre[i]); 
   t=t+arre[i]   ;         
}
prom= t/n;

for(i=0;i<n;i++)
{
 if(arre[i]>prom)
 {
 may=may+1      ;         
 }                
}
printf("EL PROMEDIO ES %.2f y los alumnos que tienen una estatura mayor que la media son %d ",prom,may);
getch();
return 0;
}
