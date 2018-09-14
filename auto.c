#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    float dc,it;
    printf("Dime cuanto fue la devaluacion del carro: ");
    scanf("%f",&dc);
     printf("Dime cuanto fue el incremento del terreno: ");
    scanf("%f",&it);
    
    if(dc<(0.5*it))
    {
        printf("Compra el auto \n");
                     
    }
    else
    {
         printf("No compres el auto \n");
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
