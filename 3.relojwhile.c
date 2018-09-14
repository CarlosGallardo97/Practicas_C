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
	

		while(h<24)
		{
			m=0;
			while(m<60)
			{	
				s=0;
				while(s<60)
				{			
				Sleep(1);
				gotoxy(30,10);
				printf("%d : %d : %d \n", h,m,s);
				s++;	
				}
			m++;
			}
		h++;
		}    
}
	

