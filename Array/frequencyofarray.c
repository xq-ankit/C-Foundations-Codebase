#include<stdio.h>
int main()
{
    int arr[6]={1,2,4,3,2,1};
    int count=0,i,j;
    for(i=0;i<=4;i++)
    {
      for(j=i+1;j<6;j++)
      { if(arr[i]==arr[j])
        {
        count++;
        printf("%d",arr[i]);
        }
      }
      
    }
        
        
    
    
    
}