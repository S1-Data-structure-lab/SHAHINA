#include<stdio.h>
int main()
{
int a[50],b[50],merge[100],n,m,i,j,t;
printf("enter the limit of first array");
scanf("%d",&m);
printf("enter the elements \n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
merge[i]=a[i];
}
j=i;
printf("enter the limit of second array");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
merge[j]=b[i];
j++;
}
printf("array after merging");
for(i=0;i<j;i++)
printf("%d",merge[i]);
for(i=0;i<m+n;i++)
{
for(j=i+1;j<m+n;j++)
{
if(merge[i]>merge[j])
{
t=merge[i];
merge[i]=merge[j];
merge[j]=t;
}
}
}
printf("\n merged array after sorting\n");
for(i=0;i<j;i++)
printf("%d\n",merge[i]);
}

