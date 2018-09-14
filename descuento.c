#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    float m,t,des;
    printf("Dime cuanto fue el monto de la compra: ");
    scanf("%f",&m);
    if(m<=500)
    {
             printf("El total a pagar es %.2f\n",m);
    }
    else
    {
        if(m>500 && m<1000)
        {
        	des=m*0.1;
        	t=m-des;
        	printf("El total a pagar es: %.2f \n",t);
		}
		else
		{
			if(m<1000 && m<7000)
			{
				des=m*0.18;
        		t=m-des;
        		printf("El total a pagar es: %.2f \n",t);
			}
			else
			{
				if(m<7000 && m>15000)
				{
					des=m*0.2;
        			t=m-des;
        			printf("El total a pagar es: %.2f \n",t);
				}
				else
				{
					des=m*0.25;
        			t=m-des;
        			printf("El total a pagar es: %.2f \n",t);
				}
			}
		}
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}

