#include<stdio.h>
int greatNum(int a,int b);
void main()
{
int i,j,result;

printf("enter two numbers that u want to comp");
scanf("%d%d",&i,&j);
result=greatNum(i,j);



printf("the greate number is %d",result);
}
int greatNum(int x,int y)

{
if(x>y)
{
return x;
}
else
{
return y;

}
}

