#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str1[20], str2[10];

    scanf("%[^\n]s", &str1);
    fflush(stdin);
    scanf("%[^\n]s", &str2);

    if(strcmp(str1, str2) == 0)
        printf("Same");
    else
        printf("Not Same");



    return 0;

}
