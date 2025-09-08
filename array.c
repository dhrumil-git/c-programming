#include<stdio.h>
#include<conio.h>
int main()
{
int a[5];
printf("enter 5 values");
for(int i=0;i<5;i++)
scanf("%d",&a[i]);
printf("\norignal array ");
for(int i=0;i<4;i++)
for(int j=i+1;j<5;j++)
if (a[i] > a [j])
{
    int t = a[i];
    a[i]=a[j];
    a[j]=t;
}
printf ("\nsorted array");
for(int i=0;i<5;i++)
    printf("%d",a[i]);
}








