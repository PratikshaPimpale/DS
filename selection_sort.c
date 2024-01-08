#include<stdio.h>
void selection_sort(int a[100],int n)
{
	int i,j,index,min,t;
	for(i=0;i<n;i++)
		{
			min=a[i];
			index=i;
			for(j=i+1;j<n;j++)
			{
				if(a[j]<min)
				{
					min=a[j];
					index=j;
				}
			}
			t=a[i];
			a[i]=a[index];
			a[index]=t;
		}
	printf("selection sorted numbers=");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
}
int main()
{
	int a[100],i,n;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter n numbers: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	selection_sort(a,n);
}
