#include<stdio.h>
#include<string.h>


int main()
{
    char str[100];
    int i,  counter=0;
    gets(str);

    for(i=0; i<strlen(str); i++)
    {
          if(str[i] != ' ')
               counter++;
    }
    printf("Number of letters=%d\n", counter);
    return 0;
}
