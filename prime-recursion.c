//Write a C Program to check whether a number is prime no. or not using recursion

#include <stdio.h>

int prime(int n, int i)
{
    int c=0; // count
    if(i==1)
        return 1;
    else 
    {
        if(n%i==0)
            c=1;
        else
            return prime(n,i-1);
    }   
}

int main()
{
    int x; //stores value to check if prime or not
    printf("\nEnter the value: ");
    scanf("%d", &x);
    int p = prime(x, x-1);
    (p==1) ? printf("\n%d is a prime no.", x) : printf("\n%d is not a prime no.", x);

    return 0;
}