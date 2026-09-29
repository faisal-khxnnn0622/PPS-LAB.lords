#include <stdio.h>
int main()
{
    int a,b,result;
    printf("Enter your first number.");
    scanf("%d",&a);

    printf("Enter your second number.");
    scanf("%d",&b);

    result = a ^ b;
    printf("XOR Result =%d",result);
    return 0;
}


