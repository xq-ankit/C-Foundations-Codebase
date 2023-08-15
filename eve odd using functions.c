#include<stdio.h>
int eveodd(int a)
{
	if (a%2==0)
	return 1;
	else 
	return 0;
}
int main ()
{
int n;
printf("ENTER THE NUMBER HERE ");
scanf("%d",&n);
printf("%d",eveodd(n));
return 24;
}