#include <stdio.h>
#include <conio.h>
#include <math.h>

float pi=3.1416,a;

void tri();
void rect();
void cir();
void cil();
char menu();


int main()
{
    char opc;
    opc=menu();
    switch(opc)
    {
               case'a':
               case'A':
                       tri();
                       printf("El resultado es: %.2f",a);
                       break;
               case'b':
               case'B':
                       rect();
                       printf("El resultado es: %.2f",a);
                       break;
               case'c':
               case'C':
                       cir();
                       printf("El resultado es: %.2f",a);
                       break;
               case'd':
               case'D':
                       cil();
                       printf("El resultado es: %.2f",a);
                       break;
               default:
                       printf("Error, ingrese una letra valida");
                       
    }
    getch();
    return 0;
}
 void tri()
 {
      float b,h;
      printf("Dime cuanto mide la base: ");
      scanf("%f",&b);
      printf("Dime cuanto mide la altura: ");
      scanf("%f",&h);
      a=b*h/2 ; 
 }
 void rect()
 {
      float b,h;
      printf("Dime cuanto mide la base: ");
      scanf("%f",&b);
      printf("Dime cuanto mide la altura: ");
      scanf("%f",&h);
      a=b*h;
 }
 void cir()
 {
      float r;
      printf("Dime cuanto mide el radio: ");
      scanf("%f",&r);
      a=pi*pow(r,2);
 }
 void cil()
 {
      float r,h;
      printf("Dime cuanto mide el radio: ");
      scanf("%f",&r);
      printf("Dime cuanto mide la altura: ");
      scanf("%f",&h);
      a=2*pi*r*h+2*pi*pow(r,2);
 }
 char menu()
 {
      char v;
      printf("Menu\n");
      printf("a)Area de triangulo\n");
      printf("b)Area del rectangulo\n");
      printf("c)Area del circulo\n");
      printf("d)Area del cilindro\n");
      printf("Elige una opcion: \n");
      fflush(stdin);
      scanf("%c",&v);
      return v;
 }
