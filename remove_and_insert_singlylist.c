#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* next;
};
struct node* create(struct node* head)
{
	int i,n;
	struct node* temp,*newnode;
	printf("\n Enter Limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter N Number : ");
		scanf("%d",&(newnode->data));
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return head;
}
void dis(struct node* head)
{
	struct node* temp;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}

struct node* last(struct node* head)
{
	struct node *temp1,*temp;
	for(temp=head;temp->next->next!=NULL;temp=temp->next);
	temp1=temp->next;
	temp->next=NULL;
	free(temp1);
	return head;
}

struct node* ins_beg(struct node* head)
{
	int num;
	struct node* newnode,*temp;
	printf("\n Enter No To Beg : ");
	scanf("%d",&num);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=head;
	head=newnode;
	return head;
}
int main()
{
	struct node* head=NULL;
	head=create(head);
	dis(head);
	head=last(head);
	printf("\n After Remening Node : ");
	dis(head);
	head=ins_beg(head);
	dis(head);
	
}
