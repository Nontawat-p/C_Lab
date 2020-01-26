#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fileStudent[40];
    FILE*fp;

    printf("Enter a file name to read : ");
    scanf("%s",fileStudent);
    fp=fopen(fileStudent,"r");
    if(fp==0){
        printf("Error : %s does not exist",fileStudent);
        return 1;
    }
    int N,id,score;
    char name[40];
    char Lastname[40];
    char grade;

    printf("-----------------------------------------------------------\n");
    printf("Student ID\tName\t\t\tScore\tGrade\n");
    printf("-----------------------------------------------------------\n");

    while(!feof(fp)){
        fscanf(fp,"%d\n",&id);
        fscanf(fp,"%s\n",name);
        fscanf(fp,"%s\n",Lastname);
        fscanf(fp,"%d\n",&score);

            if(score>=80){
                grade='A';
            }
            else if(score>=70){
                grade='B';
            }
            else if(score>=60){
                grade='C';
            }
            else if(score>=50){
                grade='D';
            }
            else {
                grade='F';
            }
        printf("%d\t\t%s %s\t\t%d\t %c\n",id,name,Lastname,score,grade);
    }
    fclose(fp);

    return 0;
}
