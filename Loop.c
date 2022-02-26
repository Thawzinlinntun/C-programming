#include<stdio.h>
int main(){
    printf("This program is to display 1 to the number user typed:\n");
    int number,inputnum;
    number=1;
    printf("Enter your number:");
    scanf("%d",&inputnum);
while(number<=inputnum)
{
    printf("%d",number++);
}
return 0;
}
