#include<stdio.h>
int main ()
{
	int r,c,i,j;
	printf("ENTER THE NUMBER OF ROWS ");
	scanf("%d",&r);
	printf("ENTER THE NUMBER OF COLUMN ");
	scanf("%d",&c);
	int a[r][c];
	for (int i=0;i<r;i++)
	
	for (int j=0;j<c;j++)
	scanf("%d ",&a[i][j]);
	}
	for (i=0;i<r;i++)
	{
	for (j=0;j<c;j++)
	{
	if (i==0||j==0||i=(r-1)||j==r-1)
	printf(" %d",a[i][j]);
	else 
	printf(" ");
	}
	printf(" \n ");
}
}