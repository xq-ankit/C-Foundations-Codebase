#include<stdio.h>
int main()
{
	int a=0,b=1,n,c;
	printf("ENTER THE NUMBER ");
	scanf("%d",&n);
    while (a<=n)
    {
    	printf("%d \n ",a);
    	c=a+b;
    	a=b;
    	b=c;}
}