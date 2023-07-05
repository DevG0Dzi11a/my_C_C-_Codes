#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];

    int n = 0,m = 0, times=0;
    printf("String 1: ");
    gets(str1);
    printf("String 2: ");
    gets(str2);
    int len = strlen(str2);

    while(str1[n] != '\0')
    {
        if(str1[n] == str2[m])
        {
            while(str1[n] == str2[m]  && str1[n] !='\0')
            {
                n++;
                m++;
            }
            if(m == len && (str1[n] == ' ' || str1[n] == '\0'))
            {
                times++;
            }
        }
        else
        {
            while(str1[n] != ' ')
            {
                n++;
                if(str1[n] == '\0')
                    break;
            }
        }
        n++;
        m=0;
    }

    if(times > 0)
    {
        printf("Found!\n");
    }
    else
    {
        printf("Not found!\n");
    }

    return 0;
}
