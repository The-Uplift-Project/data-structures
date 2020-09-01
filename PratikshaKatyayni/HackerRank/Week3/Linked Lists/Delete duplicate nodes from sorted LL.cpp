

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    if(head==NULL||head->next==NULL)
    return head;

    SinglyLinkedListNode* prev=head;
    SinglyLinkedListNode* cur=head->next;
    while(cur!=NULL)
    {
        if(cur->data!=prev->data)
        {
            prev=cur;
            cur=cur->next;
        }
        else
        {
            SinglyLinkedListNode* temp=cur;
            cur=cur->next;
            delete(temp);
            prev->next=cur;

        }
    }
    return head;

}

