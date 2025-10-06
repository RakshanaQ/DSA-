#include<iostream>
#include<cstdlib>
using namespace std;
struct lnode{
	int data;
	struct lnode *next;
};
typedef struct lnode node;
node * top=NULL;
void push(int val)
{
	node * newNode=(node*)malloc (sizeof(node));
	if (top==NULL)
	{
		cout<<"Out of memo\n";
	}
	newNode->data=val;
	newNode->next=top;
	top=newNode;
}
void dis()
{
	if (top==NULL)
	{
		cout<<"List is empty\n";
	}
	node * temp=top;
	cout<<"List\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void pop()
{
	if (top==NULL)
	{
		cout<<"Out of memo\n";
	}
	node* del=top;
	cout<<del->data<<endl;
}

