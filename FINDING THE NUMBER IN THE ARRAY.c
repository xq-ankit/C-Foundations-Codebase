#include<stdio.h>
int main ()
{
	int n;
	printf("DECLARE THE SIZE OF AN ARRAY ");
	scanf("%d",&n);
	int a[n],j,f=0,i;
	for (int i=0;i<n;i++)
	{
		printf("ENTER THE %d ELEMENT HERE  ",i+1);
		scanf("%d",&a[i]);
	}
	printf("ENTER THE NUMBER TO BE FIND ");
	scanf("%d",&j);
    for (int i=0;i<n;i++)
	{
		if (a[i]==j)
       {
		 f++;
        printf("NUMBER FOUNDED AT POSITION  %d",i+1);}
    }
    if (f==0)
    printf("NUMBER NOT FOUND IN THE ARRAY");
   
}