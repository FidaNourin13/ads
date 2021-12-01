#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void Display();

#define n 5
int stack[n];
int top=-1;
void push()
    {
     int item;
     printf("enter data");
     scanf("%d",&item);
     if(top==n-1)
   {
    printf("\n overflow");
   }
else
   {
    top++;
    stack[top]=item;
    }
   }
void pop()
  {
   int item;
   if(top==-1)
	{
	printf("\n underflow");
        }
  else
   {
    item=stack[top];
    top--;
    printf("\n %d the poped item from stack",item);
    }
  }
void Display()
{
 int i;
 if(top==-1)
 {
    printf("\n underflow");
 }
else
	{
	 printf("\n stack element are");
	for(i=top;i>=0;i--)
	{
	 printf("\n%d",stack[i]);
        }
       }
   }
void main()
{
int ch;
do
  {
printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
  {
	case 1:push();
	break;
	case 2:pop();
	break;
	case 3:Display();
	break;
	case 4:exit(0);
	defualt:printf("invalid choice");
  }
 }
while(ch!=0);
  }

