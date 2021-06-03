
#include <stdio.h>

int main()
{
    int a,b;
    printf("\n Enter 2 numbers: ");
    scanf("%d%d", &a, &b); //input the 2 values
    printf("\n Given no.s before swapping: A - %d | B - %d", a, b); // printing regular values
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n Given no.s after swapping : A - %d | B - %d", a, b); // printing swapped values
    
    return 0;
}