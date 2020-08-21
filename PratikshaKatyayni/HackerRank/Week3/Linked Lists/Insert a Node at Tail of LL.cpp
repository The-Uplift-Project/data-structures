

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode* temp= new SinglyLinkedListNode(data);
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    head=temp;
    else
    {
        SinglyLinkedListNode* cur=head;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=temp;
    }
    return head;
}

