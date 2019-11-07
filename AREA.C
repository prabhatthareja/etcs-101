#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,Area;
char in;
clrscr();
printf("\n To Calculate the Area of a rectangle");
printf("\n Enter length and breadth \n");
scanf("%f %f",&a,&b);
Area=a*b;
printf("The Area=%f",Area);
getch();
}
