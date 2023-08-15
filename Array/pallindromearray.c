// if an array arr contains n elements,
//then check if the given array is a palindrome or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of element: ");
    scanf("%d",&n);
    printf("Enter the element of the array:\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
    if(arr[i]!=arr[(n-1)-i]){
        printf("Not a PALLINDROME");
        break;}
    else 
        count++;
    }
    if(count==n)
    printf("PALLINDROME");
    return 0;
}