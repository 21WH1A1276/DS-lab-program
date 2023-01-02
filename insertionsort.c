#include<stdio.h>
int main()
{
	int a[20],i,j,n,temp;
	printf("enter size of an array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>0 &&a[j-1]>a[j])
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
	printf("sorted list of elements:");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
}
		
