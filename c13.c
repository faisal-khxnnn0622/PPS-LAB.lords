// Write a c program to calculate marks of student
#include <stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float avg;
    printf("Enter Your marks of subjects :");
    scanf("%d ",&a);
    scanf("%d ",&b);
    scanf("%d ",&c);
    scanf("%d ",&d);
    scanf("%d ",&e);
    sum = a+b+c+d+e;
    avg=sum/5.0;
    printf("AVG = %.1f" , avg);
    return 0;
}
