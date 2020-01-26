#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

    {
            int CAns1,CAns2,UA1,UA2;
            char Des;


    do {     srand(time(NULL));


                CAns1 =rand()%2;
                CAns2 =rand()%2;




                printf("Guess the flipping coin (1 for heade, 0 for tails):\n");
                printf("Enter the first answer :");
                scanf("%d%*c",&UA1);
                printf("Enter the second answer :");
                scanf("%d%*c",&UA2);

                if ((CAns1 == UA1)&&(CAns2 == UA2))
                    {   printf("Your answer is %d-%d, Com answer = %d-%d. Your answer correct\n",UA1,UA2,CAns1,CAns2);
                        printf("Do you want to continue? (y/n)");
                        scanf("%c%*c",&Des);
                    }
               else if ((CAns1!= UA1)||(CAns2 != UA2))
                    {
                        printf("Your answer is %d-%d, Com answer = %d-%d. Your answer wrong \n",UA1,UA2,CAns1,CAns2);
                        printf("Do you want to continue? (y/n)");
                        scanf("%c%*c",&Des);
                    }


        }while(Des=='y');






    return 0;
}
