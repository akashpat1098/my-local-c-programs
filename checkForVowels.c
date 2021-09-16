        //checks foe vowels in string and gives no of vowels
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int checkVowels(char *string);
int main()
{
    int numOfVowels;
    char* string=(char*)malloc(50*sizeof(int)); //dynamic memeory allocation
    printf("Enter String:\n");
    gets(string);
    numOfVowels = checkVowels(string);
    printf("Number of vowels in string are %d",numOfVowels);
    return 0;
}
int checkVowels(char *string)
{
    int count = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        switch (string[i])
        {
        case 'a':
            count +=1;
            break;
        case 'A':
            count +=1;
            break;
        case 'e':
            count +=1;
            break;
        case 'E':
            count +=1;
            break;
        case 'i':
            count +=1;
            break;
        case 'I':
            count +=1;
            break;
        case 'o':
            count +=1;
            break;
        case 'O':
            count +=1;
            break;
        case 'u':
            count +=1;
            break;
        case 'U':
            count +=1;
            break;

        default:
            continue;
            break;
        }
    }
    return count;
}