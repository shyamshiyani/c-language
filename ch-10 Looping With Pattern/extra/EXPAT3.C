#include<stdio.h>
#include<conio.h>


main()
{

	int i,j;

	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(i%2!=0)
		printf("%c",j+64);
		else
		printf("%d",j);
		}
	 printf("\n");
	}
	getch();
}
