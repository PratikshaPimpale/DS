#include <stdio.h>
#include <stdlib.h>
#include<math.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node * insert(struct Node *head,int num)
{
	struct Node *newnode,*temp;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=num;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
		return head;
	}
	else
	{
		for(temp=head;temp->next!=head;temp=temp->next);
		temp->next=newnode;
		newnode->next=head;
		return head;
	}
}
void display(struct Node* head) 
{
    struct Node* temp = head;
    do
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    } while (temp != head); 
}
int main() 
{
    struct Node* head = NULL;
    int i,num,n;
     printf("Enter limit = ");   
     scanf("%d",&n);
    for(i=0;i<n;i++)
     {
         num=rand()%100;
         head = insert(head,num);
     }

    display(head);
}
