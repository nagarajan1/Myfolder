#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("enter the number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
	fact=fact*i;
printf("factorial is %d",fact);
}
