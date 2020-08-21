#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void push(struct node**head,int newdata){
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data = newdata;
	newnode->next = (*head);
	(*head) = newnode;
	
}
void printlist(struct node *node){
	while(node != NULL){
		printf("%d\t",node->data);
		node=node->next;
	}
}
int main(){
	struct node*head=NULL;
	int n,i,data;
	
	scanf("%d",&n);

	for(i=0; i<n; i++){
		scanf("%d",&data);
		push(&head,data);
	}
	
	printlist(head);
	return 0;
	
} 
