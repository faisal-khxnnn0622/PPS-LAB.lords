#include <stdio.h>
int main()
{
    int a,n,result;
    printf("Enter a number.");
    scanf("%d",&a);

    printf("Enter shift position.");
    scanf("%d",&n);

    result = a<<n;
    printf("LEFT SHIFT Result=%d",result);
    return 0;
}
