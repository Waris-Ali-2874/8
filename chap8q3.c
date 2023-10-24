//program to calculate one number raised to another number using loops and functions

#include <stdio.h>
int power(int  ,int );
int main() {
    int base, exp ,res;

    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);
        res=power(base,exp);
    printf("%d raised to the power %d = %d",base,exp,res);
    return 0;
}


        int power(int base ,int exp)
{


            int result=1,i;
            for (i=1;i<=exp;i++)
                result=result*base;
            return result;
}



