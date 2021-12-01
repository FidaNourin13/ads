

#include<stdio.h>
void main(){
   int s[40],p,i,n,value;
   printf("enter no of elements in array ");
   scanf("%d",&n);
   printf("enter %d elements are:\n",n);
   for(i=0;i<n;i++)
      scanf("%d",&s[i]);
   printf("enter the position where you want to insert the element:");
   scanf("%d",&p);
   printf("enter the value into that poition:");
   scanf("%d",&value);
   for(i=n-1;i>=p-1;i--)
      s[i+1]=s[i];
   s[p-1]= value;
   printf("final array after inserting the value is\n");
   for(i=0;i<=n;i++)
      printf("%d\n",s[i]);
   
}
