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
	for(h=0;h<24;h++)
	{

		for(m=0;m<60;m++)
	{	

		for(s=0;s<60;s++)
		{
				Sleep(100);
				gotoxy(30,10);
				printf("%d : %d : %d \n", h,m,s);
		
	}}}
}
	

	

