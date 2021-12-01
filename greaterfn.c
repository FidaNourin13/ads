#include<stdio.h>
int greatNum();
void main()
{

int result;
result= greatNum();
printf("the greater number is:%d",result);
}
int greatNum()
{
int i,j,greaterNum;
printf("enter two number u want to compare");
scanf("%d%d",&i,&j);
if(i>j)
{
greaterNum =i;
}
else 
{
greaterNum=j;
}
return greaterNum;
}


