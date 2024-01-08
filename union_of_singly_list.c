#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
struct node * create(struct node *list)
{	
	int n,i;
	struct node *newnode,*temp;
	printf("Enter limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter number : ");
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
			temp=newnode;
		}	
	}
	return list;
}
struct node * disp(struct node *list)
{
	struct node *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("\t%d",temp->data);
	}
}
struct node * insertend(struct node *list,int num)
{
	struct node *newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	if(list==NULL)
	{
		list=newnode;
	}
	else
	{
		for(temp=list;temp->next!=NULL;temp=temp->next);
		temp->next=newnode;
	}
	return list;
}
int search(NODE *list,int num)
{
	NODE *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		if(temp->data==num)
		{
			return 1;
		}
	}
	return 0;
}
NODE * unique(NODE *list1,NODE *list2)
{
	NODE *list3=NULL,*temp;
	for(temp=list1;temp!=NULL;temp=temp->next)
	{
		if(search(list3,temp->data)==0)
		{
			list3=insertend(list3,temp->data);
		}
	}
	for(temp=list2;temp!=NULL;temp=temp->next)
	{
		if(search(list3,temp->data)==0)
		{
			list3=insertend(list3,temp->data);
		}
	}
	return list3;
}
int main()
{
	struct node *list1=NULL;
	struct node *list2=NULL;
	struct node*list3=NULL;
	list1=create(list1);
	list2=create(list2);
	printf("\nlist 1=");
	disp(list1);
	printf("\nlist 2=");
	disp(list2);
	list3=unique(list1,list2);
	printf("\nUnion of both list=");
	disp(list3);
}

