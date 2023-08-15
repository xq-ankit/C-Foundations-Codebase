#include<stdio.h>
//way of defining a arrray
int main(){
    int b;
    int a[5]={1,5,7};
    //int a[]; this would give error but int a[]={1,2,5,7,9}; is correct 
    // for(int i=0;i<5;i++)
    // scanf("%d",&a[i]);
    for(int i=0;i<5;i++){
        // if(i==3)
        // continue;
        // printf(" %%");
        printf(" %d",a[i]);
    }
    return 0;
}