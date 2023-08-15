#include<stdio.h>
int main ()
{
	int r,c;
	printf("NUMBER OF ROWS YOU WANT ");
	scanf("%d",&r);
	printf("NUMBER OF COLUMNS YOU WANT ");
	scanf("%d",&c);
	int a[r][c];
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
	{
			printf("ENTER %d ELEMENT ",i+1);
		scanf("%d",&a[i][j]);
	}
	}
	
	
}