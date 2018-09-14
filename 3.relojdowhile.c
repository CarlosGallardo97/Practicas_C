#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}

int main()
{
	printf("*****************************RELOJ DIGITAL*****************************");
	int h,m,s;
	

		do
		{
			m=0;
			do
			{	
				s=0;
				do
				{			
				Sleep(1);
				gotoxy(30,10);
				printf("%d : %d : %d \n", h,m,s);
				s++;	
				}while(s<60);
			m++;
			}while(m<60);
		h++;
		} while(h<24);   
}
