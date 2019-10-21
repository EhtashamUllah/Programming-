#include<stdio.h>

int main(void){

    int day;
    printf("Choose a Subject\n1.ICT\n2.Fundamental Programming\n3.Applied Physics\n4.English\n5.Calculus\n6.Cancel\n");
    scanf("%d", &day);
   if(day==1)
    {
        printf("\nICT");
         }
    else if(day==2)
   {
        printf("\nfundamental programming\n");
   }
    else if(day==3)
    {
        printf("\nApplied physics\n");
    }
   else if(day==4)
    {
        printf("\nEnglish\n");
    }
    else if(day==5)
    {
        printf("\nCalculus\n");

    }
    else if(day==6)
    {
        printf("\nCancel\n");
    }
    else {
        printf("\nChoose a correct option\n");
    }
return 0;

}
