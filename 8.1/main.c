#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
        int n1,n2;
        float result;
        char des,sym;
    do{
           printf("Input Decimal Number1: ");
           scanf("%d%*c",&n1);
           printf("Input Decimal Number2: ");
           scanf("%d%*c",&n2);
           printf("Press Operator do you want to Process (+,-,*,/,^): ");
           scanf("%c%*c",&sym);
            if (sym == '+')
                   {
                        printf("Result %d + %d = %d",n1,n2,n1+n2);
                   }
            else if (sym == '-')
                   {
                        printf("Result %d - %d = %d",n1,n2,n1-n2);
                   }
            else   if (sym == '*')
                   {
                        printf("Result %d * %d = %d",n1,n2,n1*n2);
                   }
            else if (sym == '/')
                   {    result = (float)n1/(float)n2 ;
                        printf("Result %d / %d = %.2f",n1,n2,result);
                   }


            else  if (sym == '^')

                   {
                        result = pow(n1,n2);
                        printf("Result %d ^ %d = %.0f",n1,n2,result);
                    }
         printf("\nDo you want to continue? (y/n):");
        scanf("\n%c",&des) ;
    }while((des=='y')||(des=='Y')) ;
    return 0;
}

