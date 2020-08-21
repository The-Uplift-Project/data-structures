

// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;                              
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    SinglyLinkedListNode* cur1=head1;
    SinglyLinkedListNode* cur2=head2;
    while(cur1!=NULL&&cur2!=NULL)
    {
        if(cur1->data==cur2->data)
        {
            cur1=cur1->next;
            cur2=cur2->next;
        }
        else
        return false;
    }
    if(cur1==NULL&&cur2==NULL)
    return true;
    else
    return false;
}

