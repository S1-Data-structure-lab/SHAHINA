#include<stdio.h>
int main()
{
int i,j,n,a[10];
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}

