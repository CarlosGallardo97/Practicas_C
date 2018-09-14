#include <stdio.h>
#include <conio.h>

int main ()
{
 int i,n;
 float cal,prom,s;
 s=0;
 printf("Dime de cuantos alumnos quieres sacar el promedio del peso: ");
 scanf("%d",&n); 
 for(i=1;i<=n;i=i+1)
 {
 	printf("Dime el peso del alumno %d : ",i);
 	scanf("%f",&cal);
 	s=s+cal;
 	
 }
 prom=s/n;
 printf("El promedio de los pesos de los %d alumnos es: %.2f ",n,prom);
  getch();
 return 0;
} 
