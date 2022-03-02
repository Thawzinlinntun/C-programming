#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("Enter number:\n");
    scanf("%d",&num);
    for (i=1; i<=num; i++)
    {
        sum+=i;
    }
    printf("The sum is %d\n",sum);
    return 0;
}
