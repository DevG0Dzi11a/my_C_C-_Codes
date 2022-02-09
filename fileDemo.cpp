#include<stdio.h>

int main()
{
    FILE *f = fopen("test.txt", "r+");

    if(f==NULL)
    {
        printf("File open unsuccessfull!\n");
    }
    else
    {
        printf("File opened successfuully.\n");
        fclose(f);
    }
    return 0;
}
