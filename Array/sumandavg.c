#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n],sum=0;
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
sum+=arr[i];
}
printf("%d\n",sum);
printf("%f",(float)sum/n);
return 0;
}