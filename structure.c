#include<stdio.h>
#include<conio.h>
struct structure
    {
        char name[100];
        char ch;
        int num;
        float flt;
    }s[3];
int main()
{
    

    for (int i = 0; i < 3; i++)
    {   
        printf("Enter the name\n");
        scanf("%s",&s[i].name);
        printf("Enter the char\n");
        getch();
        scanf("%c",&s[i].ch);
        printf("Enter the integer\n");
        scanf("%d",&s[i].num);
        printf("Enter the float\n");
        scanf("%f",&s[i].flt);
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("Printing the data for %d\n ",s[i]);
        printf("%d\n",s[i].name);
        printf("%d\n",s[i].ch);
        printf("%d\n",s[i].num);
        printf("%d\n",s[i].flt);
    }
        

    
    
    
    
    
    return 0;
}