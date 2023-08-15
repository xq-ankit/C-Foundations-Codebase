#include<stdio.h>
int main(){
    int n,c=0,i;
    printf("Enter any Number to multiply by 31 : ");
    scanf("%d",&n);
    for(i=1;i<=31;i++)
    {
        c=c+n;
    }
    printf("%d",c);
    return 0;
}