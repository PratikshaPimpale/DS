#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* next;
};
struct node* create(struct node* head)
{
	int i,n;
	struct node *newnode,*temp;
	printf("\n Enter Limit :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter Value :");
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
struct node *swap(struct node*head,int m,int n)
{
	struct node* temp1,*temp2;
	int i,t;
	for(i=1,temp1=head;i<m &&temp1!=NULL;i++,temp1=temp1->next);
	for(i=1,temp2=head;i<n &&temp2!=NULL;i++,temp2=temp2->next);
	t=temp1->data;
	temp1->data=temp2->data;
	temp2->data=t;
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
int main()
{
	int n,m;
	struct node* head=NULL;
	head=create(head);
	dis(head);
	printf("\n Enter m Position :");
	scanf("%d",&m);
	printf("\n Enter n Position :");
	scanf("%d",&n);
	head=swap(head,m,n);
	dis(head);
}
