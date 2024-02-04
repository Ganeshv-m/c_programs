#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	textcolor(350);
	clrscr();
	cprintf("\r|=============================================================================|\n");
	cprintf("\r|                                                                             |\n");
	cprintf("\r|                         if else simple program                              |\n");
	cprintf("\r|                                                                             |\n");
	cprintf("\r|=============================================================================|\n");
	cprintf("\r|                                                                             |\n");
	cprintf("\r|                  1.select number is  odd/even                               |\n");
	cprintf("\r|                  2.select number is positive/nagetive/zero                  |\n");
	cprintf("\r|                  3.select number is 3 varriable maximum                     |\n");
	cprintf("\r|                  4.select number is 3 varriable minimum                     |\n");
	cprintf("\r|                                                                             |\n");
	cprintf("\r|=============================================================================|\n");


	printf("\n");
	printf("                         Enter your choise= ");
	scanf("%d",&n);

	if(n==1)
	{
		int x;
		clrscr();


		printf("Enter x=");
		scanf("%d",&x);

		if(x%2==0)
		{
			printf("This number is even");
		}
		else
		{
			printf("This number is odd");
		}
	}
	if(n==2)
	{
		int x;
		clrscr();

		printf("Enter x=");
		scanf("%d",&x);

		if(x>0)
		{
			printf("This number is  positive(+)");
		}
		if(x<0)
		{
			printf("This number is nagetive(-)");
		}
		if(x==0)
		{
			printf("This number is zero");
		}
	}
	if(n==3)
	{

		int x,y,z;
		clrscr();

		printf("Enter x=");
		scanf("%d",&x);

		printf("Enter y=");
		scanf("%d",&y);

		printf("Enter z=");
		scanf("%d",&z);

		if(x>y)
		{
			if(x>z)
			{
				printf("X is big");
			}
		}
		if(y>x)
		{
			if(y>z)
			{
				printf("Y is big");
			}
		}
		if(z>x)
		{
			if(z>y)
			{
				printf("Z is big");
			}
		}
	}
	if(n==4)
	{

		int x,y,z;
		clrscr();

		printf("Enter x=");
		scanf("%d",&x);

		printf("Enter y=");
		scanf("%d",&y);

		printf("Enter z=");
		scanf("%d",&z);

		if(x<y)
		{
			if(x<z)
			{
				printf("X is small");
			}
		}
		if(y<x)
		{
			if(y<z)
			{
				printf("Y is small");
			}
		}
		if(z<x)
		{
			if(z<y)
			{
				printf("Z is small");
			}
		}
	}
	getch();
	}

