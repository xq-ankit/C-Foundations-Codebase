#include<stdio.h>
int main(){
    int a[]={1,2,4,5,78,3,2};
    int n=7;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}