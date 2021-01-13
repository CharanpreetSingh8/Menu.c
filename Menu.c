#include <stdio.h>

int main()
{
    printf("Welcome!\nHere is the menu.\n");
    printf("1.\'Pizza\'\n    Costing Rs 239.\n2.\'French Fries\'\n    Costing Rs 99.\n");
    printf("3.\'Burger\'\n    Costing Rs 129.\n4.\'Sandwich\'\n    Costing Rs 149.\n");
    printf("5.\'Pasta\'\n    Costing Rs 179.\n");
    
    printf("Please place your order: ");
    int order;
    scanf("%d", &order);
    
    switch (order)
    {
        case 1:
            printf("Here is your pizza!\n");
            break;
        case 2:
            printf("Here is your French Fries!\n");
            break;
        case 3:
            printf("Here is your Burger!\n");
            break;
        case 4:
            printf("Here is your Sandwich!\n");
            break;
        case 5:
            printf("Here is your Pasta!\n");
            break;
        default : printf("Sorry we donot have this number of dish on menu.\n");
    }
    
    if (order>0 && order<=5)
    {
        printf("Thanks for the order.\nEnjoy your meal!");
    }
    else
    {
        printf("Use a valid number");
    }
    
    return 0;
}
