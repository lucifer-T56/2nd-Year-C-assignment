#include<stdio.h>

int main()
{
    int n,arr[100],k,idx=-1;
    printf("\nEnter the Number of Elemets : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array :\n");
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    
     printf("\nEnter the Number to be searched : ");
     scanf("%d",&k);
     int c=0;
     for(int i=0;i<n;i++)
    {
        c++;
         if(arr[i]==k)
         {
            
            idx=i;
            break;
         }
    }

    if(idx==-1)
    {
        printf("\nElement not found");
        printf("\nNumber of comparisons : %d",c);
    }
    else
    {
        printf("\nElement found at position : %d",idx+1);
        printf("\nNumber of comparisons : %d",c);
    }
}
    