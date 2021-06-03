
//Bit Elementary School-> 85-100 : A | 70-84 : B | 55-69 : C | 40-54 : D | <40 : F

#include <stdio.h>

int main()
{
    int m; // variable storing marks
    char c; // variable storing grade
    printf("\nEnter marks : ");
    scanf("%d", &m);

    if(m>=85)
        c='A';
    else if(m>=70)
        c='B';
    else if(m>=55)
        c='C';
    else if(m>=40)
        c='D';
    else
        c='F';

    printf("\nMarks - %d : Grade - %c", m, c);
    
    return 0;
}