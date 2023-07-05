#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int d;
    char str1[20];
    char str2[20];

    scanf("%[^\n]s", str1);
    fflush(stdin);
    scanf("%[^\n]s", str2);


    d = strcmp(str1, str2);
    printf("%d\n", d);

    if (d == 0)
        printf("Strings are same");
    else
        printf("Strings are different");

    return 0;
}
