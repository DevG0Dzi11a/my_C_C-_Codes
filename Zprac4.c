#include <stdio.h>

int main()
{
    char arr[100] = "The exam is coming soon";

    int i=0;
    while(arr[i] != '\0')
    {
        if(i == 0){
            printf("%c\n", arr[i]);
        }
        else if(arr[i] == ' ')
        {
            printf("%c\n", arr[i+1]);
        }
        i++;
    }
    return 0;
}
