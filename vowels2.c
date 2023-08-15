//finding voels using if else
#include<stdio.h>
#include<stdlib.h>
int main()
{
char cap;
printf("Enter the Alphabet: ");
scanf("%c",& cap);
if (cap=='a'||cap=='e'||cap=='i'||cap=='o'||cap=='u'||cap=='A'||cap=='E'||cap=='I'||cap=='O'||cap=='U'){
printf("%c is a VOWEL!\n",cap);}

    else{
        printf("%c is a CONSONANT\n",cap);
    }
system("pause");//hold screen the output in exe file
return 0;

}