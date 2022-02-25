#include<stdio.h>
int main(){
double income, baseTax, numChildren, credit, totalTax;
    printf("Please enter your Adjusted Gross Income: \n");
    scanf("%lf",&income);
    printf("How many children do you have?\n");
    scanf("%lf",&numChildren);
if(income < 0 && numChildren < 0)
{
    printf("Invalid inputs");
}
if(income <= 5000)
{
    baseTax = income * .10;
}
else if(income>5000 && income <=10000)
{
    baseTax = income * .20;
}
else if(income>10000)
{
    baseTax = income *.30;
}
if (numChildren>=0 && numChildren <=3)
{
    credit = numChildren * 1000;
}
else if (numChildren > 3)
{
    credit = 3000;
}
totalTax = baseTax - credit;
printf("Total Tax:%f",totalTax);
return 0;
}
