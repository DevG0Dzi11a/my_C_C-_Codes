#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char name[50];
    char lname[20];
    int len;
    char des[10];

    fgets(des, 10, stdin);
    fflush(stdin);

    /*gets()*/scanf("%[^\n]s", &name);
    fflush(stdin);
    scanf("%[^\n]s", &lname);
    printf("%s\n", name);

    len=strlen(name);
    printf("String Length Input =%d\n", len);

    strcat(strcat(name, " "), lname);

    printf("Upper Case : %s\n", strupr(name));
    printf("Lower Case : %s\n", strlwr(name));
    /*puts()*/printf("%s", des);


    return 0;
}
