
#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("\n Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    printf("\n Given no.s before swapping: A - %d | B - %d", a, b);
    temp=a;
    a=b;
    b=temp;
    printf("\n Given no.s after swapping : A - %d | B - %d", a, b);
    return 0;
}