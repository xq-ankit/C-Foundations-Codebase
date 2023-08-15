// WAP TO INPUT A 2D ARRAY OF SIZE M*N AND FIND THE SUM OF INDIVIDUALS ROWS AND INDIVIDUAL COLUMN ?

#include<stdio.h>
int main ()
{
	int r,c,sum=0;
	printf("ENTER THE NUMBER OF ROWS ");
	scanf("%d",&r);
	printf("ENTER THE NUMBER OF COLUMN ");
	scanf("%d",&c);
	int a[r][c];
	for (int i=0;i<r;i++)
	{
	for (int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	}
	for (int i=0;i<r;i++)
	{
	for (int j=0;j<c;j++)
	{
		sum = sum + a[i][j];
		
	}
	printf("SUM OF %d ROW IS= %d ",i+1,sum);
	printf("\n");
	sum=0;
}
sum =0;
		for (int i=0;i<r;i++)
	{
	for (int j=0;j<c;j++)
	{
		sum = sum + a[i][j];
		
	}
	printf("SUM OF %d COLUMN IS= %d ",i+1,sum);
	printf("\n");
	sum =0;
}
}
	
	
	