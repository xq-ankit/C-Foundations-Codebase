#include<stdio.h>
int main(){
    int n;//size of array
    printf("Enter the size of array: ");
    scanf("%d",& n);
    int a[n];
    for(int i=0;i<n;i++)//it can't be <= since array starts from 0
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}