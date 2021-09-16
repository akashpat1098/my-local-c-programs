#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

     char c;
    printf("Enter the character\n");
    scanf("%c",&c);
    char s[10];
    printf("Enter the string\n");
    scanf("%s",s);
    getchar();
    char sen[10];
    printf("Enter the sentence\n");
    scanf("%[^\n]%*c", sen);
    
    
    printf("char:%c\n",c);
    printf("string:%s\n",s);
    printf("sentence:%s\n",sen);
    return 0;
}