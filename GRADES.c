#include<stdio.h>
int main ()
{
	float p,c,cp,b,m,pe;
	printf("ENTER THE MARKS OF PHYSICS HERE ");
	scanf("%f",&p);
	printf("ENTER THE MARKS OF CHEMISTRY  HERE ");
	scanf("%f",&c);
	printf("ENTER THE MARKS OF MATHEMATICS HERE ");
	scanf("%f",&m);
	printf("ENTER THE MARKS OF BIOLOGY HERE ");
	scanf("%f",&b);
	printf("ENTER THE MARKS OF COMPUTER HERE ");
	scanf("%f",&cp);
	pe=(p+c+b+cp+m)/5;
	if (pe>90.00)
	{printf("A GRADE ");
	
	}
	else if (80.00<pe&&pe<=90.00)
	{printf("B GRADE ");

	}
	else if (70.00<pe&&pe<=80.00)
	{printf("C GRADE ");

	}
		else if (60.00<pe&&pe<=70.00)
	{printf("D GRADE ");

	}
	else if (50.00<pe&&pe<=60.00)
	 printf("E GRADE "); 
	else if (pe<=50.00)
	{
	printf("FAIL");}
	
	
	
}