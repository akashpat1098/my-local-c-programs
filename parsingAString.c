#include <stdio.h>
#include <string.h>
void parse(char *string)
{
    int in = 1, index = 0;
    for (int i = 0; i < strlen(string); i++)    //tag is removed in this
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }

        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }

    string[index] = '\0';

    while (string[0] == ' ')    // begining space is removed
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    while (string[strlen(string) - 1] == ' ')   //trailing space is removed
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "      <     h1>   My name is akash   <h1>";
    parse(string);
    printf("The parsed string is ~~%s~~", string);

    return 0;
}