#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[20],n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
printf("%d\n",a[i]);
break;
}
}
}
return 0;
}
