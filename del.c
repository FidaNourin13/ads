#include<stdio.h>

void  main()
{
   

    int array[100], p, i, n;
    printf("\n\nEnter number of elements in array:");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("\n\nEnter the location where you want to delete element from:  ");
    scanf("%d", &p);

    if(p >= n+1)
        printf("\n\nDeletion not possible\n\n");
    else 
        
        for(i = p-1; i < n-1; i++)
        array[i] = array[i+1];

    printf("\n\nResultant array is: ");
   
    for(i= 0; i < n-1; i++) 
        printf("%d  ", array[i]);

   
    
}
