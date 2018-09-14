#include <stdio.h>
#include <conio.h>

float suma(float v1,float v2);
float resta(float v1,float v2);
float multiplicacion(float v1,float v2);
float division(float v1,float v2);
char menu();


int main()
{
    char opc;
    float x,y,z;
    opc=menu();
    printf("Dime cuanto vale x: ");
    scanf("%f",&x);
    printf("Dime cuanto vale y: ");
    scanf("%f",&y);
    switch(opc)
    {
               case'a':
               case'A':
                       z=suma(x,y);
                       printf("El resultado es: %.2f",z);
                       break;
               case'b':
               case'B':
                       z=resta(x,y);
                       printf("El resultado es: %.2f",z);
                       break;
               case'c':
               case'C':
                       z=multiplicacion(x,y);
                       printf("El resultado es: %.2f",z);
                       break;
               case'd':
               case'D':
                       z=division(x,y);
                       printf("El resultado es: %.2f",z);
                       break;
               default:
                       printf("Error, ingrese una letra valida");
                       
    }
    getch();
    return 0;
}
 float suma(float v1,float v2)
 {
       return(v1+v2);
 }
 float resta(float v1,float v2)
 {
       return(v1-v2);
 }
 float multiplicacion(float v1,float v2)
 {
       return(v1*v2);
 }
 float division(float v1,float v2)
 {
       return(v1/v2);
 }
 char menu()
 {
      char v;
      printf("Menu\n");
      printf("a)Suma\n");
      printf("b)Resta\n");
      printf("c)Multiplicacion\n");
      printf("d)Division\n");
      fflush(stdin);
      scanf("%c",&v);
      return v;
 }
       

