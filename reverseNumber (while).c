#include <stdio.h>

int Reverse(int);
int Reverse(int n)
{
    int rev=0, rem;
    while(n!=0)
    {
        rem=n%10;
        rev = rev*10 + rem;
        n /=10;
    }
    return rev;
}
void main()
{
    int n, reverseNumber;
    printf("Enter n: ");
    scanf("%d", &n);
    reverseNumber= Reverse(n);
    printf("Reverse Number : %d", reverseNumber);



}
