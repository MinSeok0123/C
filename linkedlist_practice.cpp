#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *next;//林家
}NODE;

int main() {
	NODE *head;//林家
	NODE *p;
	NODE *q;
	
	head = (NODE *)malloc(sizeof(NODE));
	p = (NODE *)malloc(sizeof(NODE));
	q = (NODE *)malloc(sizeof(NODE));
	
	head -> data =12;
	head -> next = p;
	
	p -> data = 99;
	p -> next = q;
	
	q -> data = 37;
	q -> next = NULL;
	
	p=head;
	
	while(p!=NULL){
		printf("%d\n",p->data);
		p = p->next;
	}
	return 0;
}

