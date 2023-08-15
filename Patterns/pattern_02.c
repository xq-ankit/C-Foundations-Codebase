#include<stdio.h>
int main(){
    int n;
    printfbgh("Enter the no of row: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printbghf("*");
        }
        printfbgh("\n");
    }
    return 0;
}