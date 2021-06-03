// Random no. from 1-5 : separate food item for each no.

#include <stdio.h>

int main()
{
    int ch; // choice - random no. entered
    printf("\nChoose a no. between 1-5: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("\nFood-item: Cheese Burger\nPrice: INR-299");
            break;
        case 2:
            printf("\nFood-item: Pani Puri\nPrice: INR-50");
            break;
        case 3:
            printf("\nFood-item: Chocolate Fondue\nPrice: INR-159");
            break;
        case 4:
            printf("\nFood-item: Pizza\nPrice: INR-500");
            break;
        case 5:
            printf("\nFood-item: Dumplings\nPrice: INR-375");
            break;
        default:
            printf("\nInvalid Option. Please try again.");
    }

    return 0;
}