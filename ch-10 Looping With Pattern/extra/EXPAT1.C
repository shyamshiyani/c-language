#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;

	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=0;j<i;j++)
	       {
	       printf("%d",(i+j)%2);
	       }
	printf("\n");
	}
	getch();


}