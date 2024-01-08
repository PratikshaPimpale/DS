#include<stdio.h>
#define MAX 100
struct stack
{
	char data[MAX];
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
void push(char ch)
{
	if(isfull())
		printf("stack is overflow..");
	else
	{
		s.top++;
		s.data[s.top]=ch;
	}
}
void disp()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		printf("%c",s.data[i]);
	}
}
int main()
{
	int i;
	char s1[20];
	init();
	printf("Enter string: ");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		push(s1[i]);
	}
	printf("Reverse string= ");
	disp();
}

