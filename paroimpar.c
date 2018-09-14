#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int ne,res;
    printf("Dime un numero cualquiera: ");
    scanf("%d",&ne);
    res=ne%2;
    if(ne==0)
    {
             printf(" %d es un numero nulo ",ne);
    }
    else 
    {
         if(res==0)
         {
                   printf(" %d es un numero par ",ne);
         }
         else
         {
             printf(" %d es un numero impar ",ne);
         }
         }       
    system("PAUSE");
    return EXIT_SUCCESS;
}
