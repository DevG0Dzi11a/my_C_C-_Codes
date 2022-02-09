#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[20];
    char str2[20];
    char ch;

    scanf("%[^\n]s", str1);
    fflush(stdin);
    scanf("%[^\n]s", str2);

    ch= strstr(str1, str2);

    if(ch)
    {
        printf("String found");
    }
    else
        printf("String not found");



    return 0;
}
