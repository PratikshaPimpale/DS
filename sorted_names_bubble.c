#include<stdio.h>
#include<string.h>
void bubble_sort(char s1[20][20],int n)
{
	int i,pass;
	char t[20];
	for(pass=1;pass<n;pass++)
		{
			for(i=0;i<(n-pass);i++)
			{
				if(strcmp(s1[i],s1[i+1])>0)
				{
					strcpy(t,s1[i]);
					strcpy(s1[i],s1[i+1]);
					strcpy(s1[i+1],t);
				}
			}
		}
	printf("bubble sorted names=");
	for(i=0;i<n;i++)
		printf("\t%s",s1[i]);
}
int main()
{
	char s1[20][20];
	int i,n;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter n names: ");
	for(i=0;i<n;i++)
		scanf("%s",&s1[i]);
	bubble_sort(s1,n);
}
