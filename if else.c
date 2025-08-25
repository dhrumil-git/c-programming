#include<stdio.h>
#include<conio.h>

int main()
{

   int a,b;
   printf("enter 2 values");
   scanf("%d %d",&a,&b);

   if (a > b)
   printf("%d > %d\n",a,b);
   else
    if (a <b )
    printf("%d < %d\n",a,b);
   else
   printf("%d = %d\n",a,b);

   getch();




}
