#include<stdio.h>
int main()
{
	int i,j,n,temp,a[20];
	printf("enter size of an array:");
	scanf("%d",&n);
	printf("enter elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("sorted list of elements:");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
}
