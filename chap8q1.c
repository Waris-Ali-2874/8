/*//program for calculating factorial value using loops and functions
#include<stdio.h>
int factvalue(int );                                      //function declaration
int main()
{
    int num,factorial;
        printf("Enter any positive integer :-  ");
        scanf("%d",&num);
    if (num>=0)                                            //To obtain factorial of 0 or above 0
    {factorial=factvalue(num);                             //funtion call
        printf("Factorial of %d is :-  %d",num,factorial);}
    else
        printf("Factorial of %d cannot be obtained as number is not a positive integer",num);
    return 0;

}
int factvalue(int num)
{                                   //funtion definition
int fact=1,i;

if (num>1)
    for (i=1;i<=num;i++)
        fact=fact*i;
    return fact;
if (num==0||num==1)
    fact =1;
return fact;
}*/
#include<stdio.h>
int factvalue(int);
int main()
{
    int num,factorial;
    printf("enter the number");
    scanf("%d",&num);
    factorial=factvale(num);
    printf("factroial is %d",factorial);
    return 0;
}
int factvalue(int num)
{
    int fact=1,i;
    for (i=1;i<=num;i++)
        fact=fact*i;
    return fact;
}

