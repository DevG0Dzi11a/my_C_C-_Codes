#include <stdio.h>


int main()
{
    struct str{
    int s1;
    char st[30]
    };
    struct str s[]= {{1, "str1"} , {2, "str2"},{3, "str3"}};
    printf("%d %s", s[2].s1, (*(s+1)).st);
    return 0;
}
