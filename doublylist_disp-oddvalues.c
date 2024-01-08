#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next, *prev;
};
typedef struct node NODE;
NODE * create(NODE *list)
{
	NODE *temp,*newnode;
	int n,i;
	printf("Enter limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(NODE*)malloc(sizeof(NODE));
		printf("Enter value : ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(list==NULL)
		{
			list=newnode;
			temp=newnode;	
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;		
		}	
	}
	return list;
}
void disp(NODE *list)
{
	NODE *temp;
	printf("Odd values=");
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		if(temp->data%2!=0)
		{
			printf("%d\t",temp->data);
		}
	}
}
int main()
{
	NODE *list=NULL;
	list=create(list);
	disp(list);
}
