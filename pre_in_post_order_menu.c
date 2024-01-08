#include<stdio.h>
#include<stdlib.h>

typedef struct node
    {
      int info;
      struct node *left,*right;
    }NODE;

NODE * createBST(NODE *root)
{
   NODE * newnode,*temp,*parent;
   int n,i,num;
   printf("Enter limit:"); 
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      newnode=(NODE*)malloc(sizeof(NODE));
       printf("Enter value:");
       scanf("%d",&newnode->info);
       newnode->left=newnode->right=NULL;
       if(root==NULL)
       {
         root=newnode;
       }
       else
       {
           temp=root;
           while(temp!=NULL)   //It is used to find parent node...
           {
              parent=temp;
               if(newnode->info<temp->info)
                temp=temp->left;
              else
                temp=temp->right;
           }
           if(newnode->info<parent->info)
              parent->left=newnode;
           else
            parent->right=newnode;
       }//else
   } //for
  return root;
}

void inorder(NODE *root)
{
   if(root!=NULL)
  {
      inorder(root->left);
      printf("%d\t",root->info);
      inorder(root->right);
  }
}
void preorder(NODE *root)
{
   if(root!=NULL)
  {
      printf("%d\t",root->info);
      preorder(root->left);
      preorder(root->right);
  }
}
void postorder(NODE *root)
{
   if(root!=NULL)
  {
      postorder(root->left);
      postorder(root->right);
      printf("%d\t",root->info);
  }
}
int main()
{
   NODE *root=NULL;
    root=createBST(root);
    printf("\n Display Inorder:");
       inorder(root);
    printf("\n Display preorder:");
       preorder(root);
    printf("\n Display Postorder:");
       postorder(root);
}
