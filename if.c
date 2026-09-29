#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("enter number one:\n ");
  printf("enter number two:\n");
  printf("enter number three:\n");
  printf("enter number four:\n");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if (a>b &&  a>c && a>d)
  printf("number 1 is greatest",a);
  else if
    (b>c &&  b>a && b>d)
    printf("number two is greatest",b);
  else if
    (c>a && c>b && c>d)
    printf("number three is greatest:",c);
    else
        printf("number four is greatest:",d);
        return 0;

}
