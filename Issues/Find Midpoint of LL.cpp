// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/

node* midpoint_linkedlist(node *head)
{
    // Write your code here
    node *fast=head->next;
    node *slow=head;
    if(head==NULL||head->next==NULL||head->next->next==NULL)
        return head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
//Solved by Pratiksha
