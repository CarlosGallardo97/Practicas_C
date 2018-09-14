#include <stdio.h>
#include <conio.h>


int main()
{
    char opc;
    float x,y,z;
    printf("Menu\n");
    printf("a)Suma\n");
    printf("b)Resta\n");
    printf("c)Multiplicacion\n");
    printf("d)Division\n");
    printf("Elige una opcion\n");
    fflush(stdin);
    scanf("%c",&opc);
    printf("Dame x\n");
    scanf("%f",&x);
    printf("Dame y\n");
    scanf("%f",&y);
    switch(opc)
    {
               case'a':
               case'A':
                       z=x+y;
                       printf("z= %.2f",z);
                       break;
               case'b':
               case'B':
                       z=x-y;
                       printf("z= %.2f",z);
                       break;
               case'C':
               case'c':
                       z=x*y;
                       printf("z= %.2f",z);
                       break;
               case'd':
               case'D':
                       z=x/y;
                       printf("z= %.2f",z);
                       break;
               default:
                       printf("Error: ingrese una letra valida");
    }
    getch();
    return 0;
}
