#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int len, i;
    char ch;
    char str1[100];

    len=strlen(str1);
    scanf("%[^\n]s", & str1);

    strrev(str1);

    printf("%s", str1);

    return 0;

}
