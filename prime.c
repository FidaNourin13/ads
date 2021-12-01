#include<stdio.h>
void main()
{
int i,n,count=0,m;
printf("enter a number");
scanf("%d",&n);
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
count++;
break;
}
}
if(count==0)
{
printf("  is prime");

}
else 
{
printf(" is not");
}
}
