#include <stdio.h>

void fibonacci(int a)
{
    int i, t1 = 0, t2 = 1, nextTerm;

    for (i = 1; i <= a; ++i) {
        printf("%d", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if(i==a)
            break;
        printf(", ");
    }
}

int main() {
    int test_cases, x=1;
    printf("Test Cases :\n");
    scanf("%d", &test_cases);

    //input 'n' terms for the test cases

    int n[test_cases];
    for(int i=0; i<test_cases; i++)
    {
        printf("Terms for the test Case %d:", x++);
        scanf("%d", &n[i]);
    }

    for(int i=0; i<test_cases; i++)
    {
        fibonacci(n[i]);
        printf("\n");
    }

    return 0;
}
