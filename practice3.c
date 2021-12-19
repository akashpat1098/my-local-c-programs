#include<stdio.h>
struct student
{
    int roll;
    char f_name[20];
    char l_name[20];
    
};

int main()
{
    struct student s[10];
    struct student temp;
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter roll number:");
        scanf("%d",&s[i].roll);
        printf("\nEnter first Name:");
        scanf("%s",&s[i].f_name);
        printf("\nEnter last Name:");
        scanf("%s",&s[i].l_name);
    }
    printf("Before Sorting\n");
    for (int i = 0; i < 3; i++)
    {
       
        printf("Student %d\n",i+1);
        printf("%d\n",s[i].roll);
        printf("%s\n",s[i].f_name);
        printf("%s\n",s[i].l_name);   
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (s[i].roll>s[j].roll)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp; 
            }
            
        }
        
    }
    printf("After Sorting\n");
    for (int i = 0; i < 3; i++)
    {
       
        printf("Student %d\n",i+1);
        printf("%d\n",s[i].roll);
        printf("%s\n",s[i].f_name);
        printf("%s\n",s[i].l_name);   
    }
    
}