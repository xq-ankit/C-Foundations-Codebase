#include<stdio.h>
int main ()
{
int c=0,n,a;
printf("ENTER THE NUMBER HERE ");
scanf("%d",&n);

while (n!=0)
{
a=n%10;
c=c*10+a;
n=n/10;
}

  printf("%d",c);
}