#include <stdio.h>
int main() {
    int n, ac, bc, c, dc, ec, abc;
    printf("Enter a five digit number: ");
    scanf("%d", &n);

    ac = n%10;
    bc = (n/10)%10;
    c  = (n/100)%10;
    dc = (n/1000)%10;
    ec = (n/10000);

    ac = ac * 10000;
    bc = bc * 1000;
    c  = c  * 100;
    dc = dc * 10;
    ec = ec * 1;

    abc = ac+ bc +c + dc +ec;

    if (n == abc)
        printf ("The reverse number is equal");
     else
    printf("The reverse number is not equal");

    return 0;
}
