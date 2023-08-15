// WAP TO TAKE TRANPOSE OF A MATRIX ?
#include<stdio.h>
int main ()
{
	int r,c,i,j;
	printf("ENTER THE NUMBER OF ROWS HERE ");
	scanf("%d",&r);
	printf("ENTER THE NUMBER OF COLUMNS HERE ");
	scanf("%d",&c);
	int a[r][c];
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
		for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
			printf("%d",a[j][i]);
	}
	printf("\n");
	}
}