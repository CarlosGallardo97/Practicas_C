#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    float s,np,no,nc;
    printf("Cuanto mide el bosque en metros cuadrados: ");
    scanf("%f",&s);
    if(s>1000000)
    {
        np=0.7*s*8/10;
        no=0.2*s;
        nc=0.1*s*10/18;
                     
    }
    else
    {
        np=0.5*s*8/10;
        no=0.3*s;
        nc=0.2*s*10/18;
    }
    printf(" Se sembraran %.2f pinos, %.2f oyameles y %.2f cedros\n",np,no,nc);
    system("PAUSE");
    return EXIT_SUCCESS;
}
