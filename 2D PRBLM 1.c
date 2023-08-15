// WAP TO INPUT A 2D ARRAY OF SIZE M*N AND DISPLAY IT IN TABULAR FORM ?

#include<stdio.h>
int main ()
{
	int r,c;
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
		printf("%d",a[i][j]);
	}
	printf("\n");
}

}
	