

// Complete the sortedInsert function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* temp= new DoublyLinkedListNode(data);
    DoublyLinkedListNode* cur=head;
    temp->prev=NULL;
    temp->next=NULL;
    temp->data=data;
    if(temp->data<=head->data)
    {
        temp->next=head;
        head=temp;
        return head;
    }
    while(cur!=NULL)
    {
        if(cur->data<temp->data&&cur->next!=NULL)
        {
            cur=cur->next;
        }
        else if(cur->data>=temp->data)
        {
            cur->prev->next=temp;
            temp->next=cur;
            return head;
        }
        else if(cur->data<temp->data&&cur->next==NULL)
        {
            cur->next=temp;
            return head;
        }
    }
    return head;
}

