#include<stdio.h>
int main()
{
	int ar[50],n,i,j,temp,k;
	printf("enter the number of element in array : ");
	scanf("%d",&n);
	printf("enter the elements of the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if (ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			
			}
		}
		printf("\n array elements are after pass %d : ",i+1);
		for(k=0;k<n;k++)
		printf("%d ",ar[k]);
	}
	printf("\nSorted array: ");
	for(i=0;i<n;i++)
	printf(" %d" , ar[i]);
	printf("\n");
	return 0;
}