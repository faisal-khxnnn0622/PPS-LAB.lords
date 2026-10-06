#include <stdio.h>
int main()
{
    int n,original,remainder,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);

    original = n;
    while (n!=0)
    {
        remainder = n%10;
        sum = sum+remainder*remainder*remainder;
        n = n/10;
    }
    if (sum == original)
        printf("%d is an armstrong number.",original);
    else
        printf("%d is not an armstrong number.",original);
    return 0;

}
