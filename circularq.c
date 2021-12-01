#include<stdio.h>
#define max 6
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int element)
   {
     if((front==-1)&&(rear==-1))
	{
front=rear=0;
queue[rear]=element;
}
else if((rear+1)%max==front)
{
printf("queue is overflow");
}
else
{
rear=(rear+1)%max;
queue[rear]=element;
}
}
int dequeue()
   {
	 if((front==-1)&&(rear==-1))
            {
              printf(" \n underflow");
            }
  else if(front==rear)
       {
        printf("the dequeued elemrnt is %d\n\t",queue[front]);
    front=-1;
    rear=-1;
}
else
     {

       printf("dequeued element %d\n\t",queue[front]);
    
      front=(front+1)%max;
   }
}
void display()
{
int i=front;

       if((front==-1)&&(rear==-1))
    {
       printf("queue is empty");
     }
 else
   {
    
    printf("elements in a queue are:");
     
  while(i<=rear)
{
printf("%d\n",queue[i]);
i=(i+1)%max;
}
}
}
int main()
   {
int choice=1,x;
   while(choice<4&&choice!=0)
     {
	printf("\n1.insert an element:");

	printf("\n2.delete an element:");
	printf("\n3.display element:");
	printf("\n enter your choice:");
	scanf("%d",&choice);
     
  switch(choice)
 {
	case 1:
	printf("enter the element which is to be inserted:");
	scanf("%d",&x);
	enqueue(x);
	break;
	case 2:
	dequeue();
	break;
	case 3:
	display();
  }
}
return 0;
}


