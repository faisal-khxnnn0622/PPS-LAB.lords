// !.WAP to calculate addition subtraction multiplication division using switch case
#include<stdio.h>
int main()
{
    int choice;
    int a=10,b=5;
    printf("1.Addition\n");
    printf("2.subtraction\n");
    printf("3.multipliication\n");
    printf("4.division\n");
    printf("Enter your choice.");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("SUM =%d",a+b);
            break;

        case 2:
            printf("Difference =%d",a-b);
            break;

        case 3:
            printf("Multiplication=%d",a*b);
            break;

        case 4:
            printf("Division =%d",a/b);
            break;

        default:
            printf("INVALID CHOICE BRAHHH");
    }
    return 0;
}
