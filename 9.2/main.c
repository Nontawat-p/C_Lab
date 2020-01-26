#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int N,i=0,max=0,min=0,sum=0;
  float  Aver = 0,SD=0;
   printf("Enter number of score:");
   scanf("%d",&N);
   int score[N];
           for (i=0;i<N;i++)
           {
             printf("Enter the %d-th score:",i);
             scanf("%d",&score[i]);
            sum+=score[i];
           }

            for (i=0;i<N;i++)
                {

                min = score[0];
                if (min>score[i])
                    {
                        min = score[i]  ;

                    }
                    else {}
                                    }
            for (i=0;i<N;i++)
                {

                max = score[0];

                    if (max<score[i])
                     {
                         max = score[i];
                     }
                     else
                        {

                        }
                }
Aver = sum/N;
for (i=0;i<N;i++){
        SD+= pow((score[i]-Aver),2);
    }
    SD=sqrt(SD/(N-1));




    printf("Maximuim score is %d\n",max);
    printf("Ninimiun score is %d\n",min);
     printf("Average score is %.2f\n",Aver);
     printf("S.D. is %.2f\n",SD);

    return 0;
}
