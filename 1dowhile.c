#include <stdio.h>
#include <conio.h>

double factorial(int n);

int main()
{
    int n;
    double  res;
    printf("Dime que numero factorial es el que quieres: \n");
    scanf("%i",&n);
    res=factorial(n);
    printf("El resultado es: %.0f",res);
    getch ();
    return 0;
}

double factorial(int n)
{
       int i;
       double s;
       s=1;
       i=1;
       do
       {
        s=s*i;
        i++;
       }
       while(i<=n);
       return s;
}
