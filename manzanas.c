#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    float t,km,pkm;
    printf("Dime cuantos kilogramos de manzanas compraste: ");
    scanf("%f",&km);
    printf("Dime a cuanto esta el kilogramo de manzanas: ");
    scanf("%f",&pkm);
  
    if(km<=2)
    {
        t=km*pkm;
                     
    }
    else
    {
    	
        if(km<=5)
    {
    	t=km*pkm*0.9;
    }
	
    	else
   	{
			if(km<=10)
    {
    	t=km*pkm*0.85;
    }
    		else
    	{
    		t=km*pkm*0.8;
		}
	}
}
	printf("El total a pagar es: %.2f\n",t);
    system("PAUSE");
    return EXIT_SUCCESS;
	}
    
