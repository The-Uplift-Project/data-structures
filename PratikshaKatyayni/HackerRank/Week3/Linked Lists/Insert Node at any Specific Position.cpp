

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    int pos=-1;
    SinglyLinkedListNode* temp= new SinglyLinkedListNode(data);
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    return temp;
    SinglyLinkedListNode* cur=head;
    SinglyLinkedListNode* prev=NULL;
    while(cur!=NULL)
    {
        pos++;
        if(pos==position)
        {
            temp->next=cur;
            prev->next=temp;
            return head;
        }
        else
        {
            prev=cur;
            cur=cur->next;
        }
    }
    return head;
}

