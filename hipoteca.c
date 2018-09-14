#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    float mhipo,cnegocio,inv,invs;
    printf("Cuanto es el costo del negocio: ");
    scanf("%f",&cnegocio);
    printf("\nCuanto es el monto que el banco da por la hipoteca: ");
    scanf("%f",&mhipo);
    if(mhipo<1000000)
    {
        inv=cnegocio*0.5;
        invs=cnegocio*0.5;
        printf("La persona invertira %.2f pesos y el socio invertira %.2f ",inv,invs);
                     
    }
    else
    {
        inv=mhipo+(cnegocio-mhipo)/2;
        invs=(cnegocio-mhipo)/2;
        printf("La persona va a pagar %.2f pesos y el socio va a pagar %.2f pesos ",inv,invs);
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
