#include<stdio.h>
int main ()
{
	int a,b,hcf=1;
	 printf("ENTER NUMBER ");
	 scanf("%d",&a);
	  printf("ENTER NUMBER ");
	 scanf("%d",&b);
	 for (int i=1;i<=a||i<=b;i++)
	 {
	 	if (b%i==0&&a%i==0)
	 	hcf=i;
	 	
	 }
	 return hcf;
}