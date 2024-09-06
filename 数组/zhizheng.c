#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* replace(char* str, char* oldchar, char* newchar, char* newstr)
{
    newstr = malloc(strlen(str));
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == *oldchar)
        {
            newstr[i] = *newchar;
        }
        else
        {
            newstr[i] = str[i];
        }
    }
    return newstr;
}

int main()
{
    char str[] = "hello world";
    char* newstr;
    // char* oldchar = "o";
    // char* newchar = "a";
    char oldchar[1] = "o";
    char newchar[1] = "a";

    // char oldchar;
    // char newchar;
    // oldchar = 'o';
    // newchar = 'a';
    printf("%s\n", replace(str, oldchar, newchar, newstr));
    return 0;
}