

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* cur=head;
    SinglyLinkedListNode* prev=NULL;
    int pos=-1;
    if(head==NULL)
    return NULL;
    if(position==0)
    {
        cur=cur->next;
        free(head);
        return cur;
    }
    while(cur!=NULL)
    {
        pos++;
        if(pos==position)
        {
            prev->next=cur->next;
            free(cur);
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

