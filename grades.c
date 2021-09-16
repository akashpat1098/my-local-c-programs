#include<stdio.h>   //code worked properly,some doubt
int main(int argc, char const *argv[])
{
     float maths,science,total,percentage;
     printf("Enter the marks of maths and science:\n");
     scanf("%f %f",&maths,&science);
     printf("Enter the total marks:");
     scanf("%f",&total);
     percentage=((maths+science)/(total+total))*100;
     printf("Your percentage is: %f%\n",percentage); // can't print %
     if (percentage>=90)
     {
         printf("Your grade is A1");
     }
     else if (percentage>=80)
     {
         printf("Your grade is A2");
     }
     else if (percentage>=70)
     {
         printf("Your grade is B1");
     }
     else if (percentage>=60)
     {
         printf("Your grade is B2");
     }
     else
     {
         printf("Your grade is C0");
     }



    return 0;
}
