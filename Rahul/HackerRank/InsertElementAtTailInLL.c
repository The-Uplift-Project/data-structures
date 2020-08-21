#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void append(struct node**head,int newdata){
	struct node*current=(*head);
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=newdata;
	newnode->next=NULL;
	if(*head==NULL){
		*head=newnode;
		return;
	}
	while(current->next!=NULL){
		current=current->next;
	}
	current->next=newnode;
	return;
}
void printlist(struct node *node){
	while(node != NULL){
		printf("%d\n",node->data);
		node=node->next;
	}
}
int main(){
	struct node*head=NULL;
	
	int n,i,data;
	
	scanf("%d",&n);

	for(i=0; i<n; i++){
		scanf("%d",&data);
		append(&head,data);
	}
	
	printlist(head);
	return 0;
}
