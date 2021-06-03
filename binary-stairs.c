/*Print the pattern for no. of stairs given.
ex: for 6:
01
0101
010101
01010101
0101010101
010101010101 */

#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter no. of stairs: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) //no. of stairs
    {
        for(int j=0; j<=i; j++) //no. of 01's in each stair
            printf("01");
        printf("\n");
    }

    return 0;
}
