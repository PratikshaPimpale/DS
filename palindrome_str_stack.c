#include<stdio.h>
#define MAX 5
struct stack
{
	int data[MAX];
	int top;
}s;
void init()
{
	s.top=-1;
}
int isfull()
{
	if(s.top==MAX-1)
		return 1;
	else
		return 0;
}
int isempty()
{
	if(s.top==-1)
		return 1;
	else
		return 0;
}
void push(int num)
{
	if(isfull())
		printf("Stak is full dont push");
	else
	{
		s.top++;
		s.data[s.top]=num;
	}
}
char pop()
{
	int val;
	if(isempty())
		printf("Stack is empty dont pop");
	else
	{
		val=s.data[s.top];
		s.top--;
		return val;
	}
}
int main()
{
	char s1[20];
	init();
	int i;
	printf("Enter string: ");
	scanf("%s",&s1);
	for(i=0;i<s1[i]!='\0';i++)
		push(s1[i]);
	for(i=0;i<s1[i]!='\0';i++)
	{
		if(s1[i]!=pop())
		break;
	}
	if(isempty())
		printf("Palindrome");
	else
		printf("Not palindrome");
}
