#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Array:\n");
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        }
        printf("\nArray before Reverse:");
        for(int i=0;i<n;i++){
            printf(" %d ",arr[i]);
        }
        printf("\nArray after Reverse:");
        for(int i=n-1;i>=0;i--)
        {
            printf(" %d ",arr[i]);
        }
system("PAUSE");
    return 0;
}