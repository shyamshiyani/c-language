#include<stdio.h>
#include<conio.h>

main()
{

	int i,j,k;

	clrscr();

	for(i=1;i<=5;i++)
	{
		for(k=i;k<=4;k++)
		{
		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		printf("*");
		}
		for(j=j-2;j>=1;j--)
		{
		printf("*");
		}

	printf("\n");
	}
	getch();
	return 0;
	}