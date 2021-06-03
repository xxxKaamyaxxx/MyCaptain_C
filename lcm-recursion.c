//Write a C Program to find the LCM of 2 given numbers using recursion.

#include <stdio.h>

int lcm(int a, int b)
{
    static int mult = 0;
    mult += b;
    
    return (((mult%a==0) && (mult%b==0)) ? mult : lcm(a, b));
}

int main()
{
    int x, y, res;
    printf("Enter value-1: ");
    scanf("%d", &x);
    printf("Enter value-2: ");
    scanf("%d", &y);
    res = (x>y) ? lcm(y,x) : lcm(x,y);
        
    printf("\nLCM of %d and %d : %d", x, y, res);
    
    return 0;
}