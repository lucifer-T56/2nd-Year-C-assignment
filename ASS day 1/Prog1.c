#include<stdio.h>

int main()
{
    int n,arr[100];
    printf("\nEnter the Number of Elemets : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array :\n");
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    for(int i=0;i<n;i++)
    {
        sum+=*(arr+i);
    }

    printf("\n The sum of the array elements is : %d",sum);

    return 0;

}