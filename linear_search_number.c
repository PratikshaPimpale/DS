#include<stdio.h>
void search(int a[100],int n)
{
	int i,num;
	printf("Enter number to search:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			break;
		}
	}
	if(i==n)
		printf("%d is not present in array",num);
	else
		printf("%d is present in array",num);
}
int main()
{
	int a[100],i,n;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter n numbers: ");
	for(i=0;i<n;i++)
		scanf("%s",&a[i]);
	search(a,n);
}
