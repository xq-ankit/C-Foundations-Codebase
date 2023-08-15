//Given an array of marks of 10 students, if the marks of any student, 
// is less than 35 print its roll number.
// [roll number here refers to the index of the aray].
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the Number of the stdents: ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the marks of the students\n");
    printf("-----------------------------------");
    for(int i=0;i<n;i++){
        printf("\nEnter the marks of the student %d:",i+1);
        scanf("%d",&marks[i]);
    }
    printf("Roll No. of students who score less than 35:\n");
    for(int i=0;i<n;i++){
        if(marks[i]<35){
            printf("%d\n",i);
            count++;
            }
            }
    printf("Total no of student who scored less than 35 is: %d\n",count);
    return 0;
}