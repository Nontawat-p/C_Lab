#include <stdio.h>
#include <stdlib.h>

int main()
{
    int En,i=1,N,sum=0;
    int max,min;
    float Aver;


    printf("Enter the number of entries: ");
    scanf("%d",&En);

    while(En<0){

            printf ("Please enter positive integer !");
            printf("\nEnter the number of entries: ");
            scanf("%d",&En);

                }

    if(i==1)
            {
                    printf("Enter a number for entry %d:",i);
                    scanf("%d",&N);
                    max=N;
                    min=N;
                    sum = N;
                    Aver = N;
                    i=i++;
            }


    while (i<=En)

        {
          printf("Enter a number for entry %d:",i);
          scanf("%d",&N);

            sum  = sum+N;
            Aver = Aver+N ;
            if (max>N)
                {

            }else
                {
                     max = N ;
                }

            if (min<N)
            {

            }else{min = N;}

          i++;
        }

Aver = Aver/En;

printf("Min = %d\n",min);
printf("Max = %d\n",max);
printf("Sum = %d\n",sum);
printf("Average = %.2f\n",Aver);

    return 0;
}
