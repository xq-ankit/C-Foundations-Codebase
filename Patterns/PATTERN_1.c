#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int i,j,k;
	printf("ENTER THR NUMBER HERE ");
	scanf("%d",&k);
	for (i=1;i<=k;i++)//
	{
		for (j=1;j<=k;j++)
		printf("*");
		printf("\n");
	}
	system("PAUSE")
	}
	