#include<stdio.h>
void main()
  {
    int a[5],i,n;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the array elements:");

 for(i=0;i<n;i++)
 {
scanf("%d",&a[i]);
 }
	
printf("elements are :\t");
      
for(i=0;i<n;i++)
	{
printf("%d",a[i]);

}
}
