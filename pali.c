#include<stdio.h>
void main()
{
int rev=0,n,r,num;
printf("enter the number");
scanf("%d",&n);
num=n;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(num==rev)

{
printf("palindrom");
}
else
{
printf("not palnrm");
}
}
