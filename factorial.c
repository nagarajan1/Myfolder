#include<stdio.h>
int main()
{
int i,n,fact=1;
if(n<=0)
	printf("factorial is not possible");

printf("enter the number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
	fact=fact*i;
printf("factorial is %d",fact);
}
