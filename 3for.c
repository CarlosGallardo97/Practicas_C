#include <stdio.h>
#include <conio.h>
#include <math.h>

int primo(int a);

int main()
{
    int a,res;
    printf("Dime un numero entero: ");
    scanf("%d",&a);
    res=primo(a);
    switch(res)
    {
               case 0:
                    printf("El numero no es primo ");
                    break;
               case 1:
                    printf("El numero es primo ");
                    break;
    }
  
  getch();
  return 0;
}

int primo(int a)
{
    int b,c,i,x;
    c=0;
     
    for(i=1;i<=a;i++)
    {
                     b=a%i;
                     if(b==0)
                     {
                            c=c+1;
                     }
    
    }
    
    if(c>2)
    {
           x=0;
    }
    else
    {
        x=1;
    }
    return x;
}

