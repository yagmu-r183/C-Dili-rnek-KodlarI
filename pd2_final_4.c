#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int data;
	struct node *next;
};struct node *p,*q,*head,*newnode;

int main()
{
	struct node;
	listeolustur();
	silme();
}

void listeolustur()
{

	int n,i;
	node *p,*q;
	printf("eleman sayisi girin:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			head=(node*)malloc(sizeof(node));
			head=newnode;	
		}
		else
		{
			newnode->next=(node*)malloc(sizeof(node));
			newnode=newnode->next;
		}
		
		printf("veri girisi yap:");
		scanf("%d",&newnode.data);
		
	}
	newnode->next=NULL;
}

void silme()
{
	p=head;
	node *p,*q,head;
	for(int i=0;i<=n/2;i++)
	{
		p=p->next;
		if(i==n/2)
		{
			q->next=p->next;
			free(p);
			printf("silme islemi gerceklesti");
		}
	}
}





