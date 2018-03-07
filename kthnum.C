#include<stdio.h>
int main()
{
int n,i,k,a[10];
printf("enter the n number:");
scanf("%d",&n);
printf("enter the k th number:");
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("kth number is %d",a[k-1]);
return 0;
}
