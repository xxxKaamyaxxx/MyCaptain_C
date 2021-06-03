/*Write a C Program to initialitse a 3x3 array, insert elements - read and print the elements using only pointers.
Also fund the sum of diagonal elements.*/

#include <stdio.h>

int diagsum(int a[3][3])
{
    int s=0;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(i==j || (i+j==2))
                s+=a[i][j];
    return s;
}

int main()
{
    int arr[3][3];
    printf("Enter the 3x3 Matrix-Array elements:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("\nElement @a[%d][%d] : ", i, j);
            scanf("%d", (*(arr+i)+j));
        }
    }
    printf("\nEntered Values:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%5d ", *(*(arr+i)+j));
        printf("\n");
    }
    printf("\nSum of all diagonal elements = %d", diagsum(arr));

    return 0;
}