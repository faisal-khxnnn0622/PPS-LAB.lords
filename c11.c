#include <stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter Three Numbers : ");
    scanf("%d %d %d" , &a,&b,&c);
    sum = a+b+c;
    printf("Lets print average of three \n");
    avg = sum/3.0;
    printf("AVG = %.2f" , avg);
    return 0;
}
