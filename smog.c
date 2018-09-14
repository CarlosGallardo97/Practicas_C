#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    float pIMECA,dp,g;
    printf("Dime cuantos puntos IMECA se obtuvieron en la revision: ");
    scanf("%f",&pIMECA);
     printf("Dime cuanto se gana en un dia en la fabrica: ");
    scanf("%f",&g);
    
    if(pIMECA>170)
    {
        dp=(g*7)+(0.5*g*7);
                     
    }
    else
    {
        dp=0;
    }
    printf(" El dinero perdido despues de la revision fue de %.2f pesos \n",dp);
    system("PAUSE");
    return EXIT_SUCCESS;
}
