//sum of digits - usinr recursion

#include <stdio.h>

int digisum(int n)
{
    if (n==0)
        return 0;
    else
        return((n%10)+digisum(n/10)); //extracts another digit to add
}

int main()
{
    int a; //stores value to calculate sum of digits
    printf("\nEnter the value: ");
    scanf("%d", &a);
    printf("\nSum of Digits : %d = %d", a, digisum(a));

    return 0;
}