#include <stdio.h>
#include <conio.h>

void Fibonacci (int n);

int main()
{
	int n;
    printf("Dime en que numero quieres que termine la sucesion Fibonacci: ");
    scanf("%d",&n);
    Fibonacci(n);
    getch();
    return 0;
           
}

void Fibonacci (int n)
{
  int x,y,z,i;
  x=0;
  y=1;
  printf("0\n1\n");
  i=1;
  do
  {
      z=x+y;
      printf("%d\n",z);
      x=y;
      y=z;
      i++;
  }
  while (i<=n-2);
  
}
