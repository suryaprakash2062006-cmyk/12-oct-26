#include<stdio.h>
   int main()
   {
    int a,b;     
    printf("befor swoping");
    printf("enter the a");
    scanf("%d",&a);
     printf("enter theb");
    scanf("%d",&b);
    printf("after swoping");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
   }