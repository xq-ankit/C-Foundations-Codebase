// WAP TO INPUT A 2D ARRAY OF SIZE M*N AND FIND THE SUM AND AVG. OF ALL THE ELEMENTS ?
#include<stdio.h>
int main ()
{
	int r,c;
	float sum=0;
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
     sum=sum +a[i][j];
    }
    printf("THE SUM OF ALL THE ELEMENT IN THE MATRIX IS %0.2f \n ",sum);
    printf("THE AVERAGE OF ALL THE ELEMENT IN THE MATRIX IS %0.2f",sum/(r*c));
}