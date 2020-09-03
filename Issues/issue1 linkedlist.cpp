#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
            int data;
            Node* next;
};

void push(Node** head,int newdata) // push function for the linked list
{
    Node* newnode=new Node();
    newnode->data=newdata;
    newnode->next=(*head);
    (*head)=newnode;
}

void middle(Node** head) // fuction to give middle number of the linked lsit
{
    Node* fast=*head;
    Node* slow=*head;
    while(fast!=NULL and fast->next!=NULL)
    {
        fast=(fast->next)->next;
        slow=slow->next;
    }
    cout<<slow->data;
    
}
int main()
{
    Node* head=NULL;
    
    push(&head, 55);  
    push(&head, 3);  
    push(&head, 555);  
    push(&head, 2);  
    push(&head, 1); 
    
    middle(&head);
    
    
}
