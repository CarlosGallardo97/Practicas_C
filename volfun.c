#include <stdio.h>
#include <conio.h>
#include <math.h>

float pi=3.1416,v;

void pir();
void caja();
void cil();
void esf();
char menu();


int main()
{
    char opc;
    opc=menu();
    switch(opc)
    {
               case'a':
               case'A':
                       pir();
                       printf("El resultado es: %.2f",v);
                       break;
               case'b':
               case'B':
                       caja();
                       printf("El resultado es: %.2f",v);
                       break;
               case'c':
               case'C':
                       cil();
                       printf("El resultado es: %.2f",v);
                       break;
               case'd':
               case'D':
                       esf();
                       printf("El resultado es: %.2f",v);
                       break;
               default:
                       printf("Error, ingrese una letra valida");
                       
    }
    getch();
    return 0;
}
 void pir()
 {
      float l,a,h;
      printf("Dime cuanto mide de largo: ");
      scanf("%f",&l);
      printf("Dime cuanto mide de ancho: ");
      scanf("%f",&a);
      printf("Dime cuanto mide su altura: ");
      scanf("%f",&h);
      v=(l*a*h)/3 ; 
 }
 void caja()
 {
      float l,a,h;
      printf("Dime cuanto mide de largo: ");
      scanf("%f",&l);
      printf("Dime cuanto mide de ancho: ");
      scanf("%f",&a);
      printf("Dime cuanto mide su altura: ");
      scanf("%f",&h);
      v=l*a*h;
 }
 void cil()
 {
      float r,h;
      printf("Dime cuanto mide el radio: ");
      scanf("%f",&r);
      printf("Dime cuanto mide la altura: ");
      scanf("%f",&h);
      v=pi*h*pow(r,2);
 }
 void esf()
 {
      float r;
      printf("Dime cuanto mide el radio: ");
      scanf("%f",&r);
      v=(4/3)*pi*pow(r,3);
 }
 char menu()
 {
      char v;
      printf("Menu\n");
      printf("a)Volumen de piramide de 4 caras\n");
      printf("b)Volumen de una caja\n");
      printf("c)Volumen de un cilindro\n");
      printf("d)Volumen de una esfera\n");
      printf("Elige una opcion: \n");
      fflush(stdin);
      scanf("%c",&v);
      return v;
 }
