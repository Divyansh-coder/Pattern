#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	printf("Here is your pattern\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)    /*This loop prints the pattern*/
		{
			printf("01");
		}
		printf("\n");    /*Here we take cursor to the next line*/
	}
	return 0;
}
