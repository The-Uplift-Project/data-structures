
 
// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* cur1=head1;
    SinglyLinkedListNode* cur2=head2;
    while(cur1!=cur2)
    {
        if(cur1!=NULL)
        {
            cur1=cur1->next;
        }
        else
        cur1=head2;

        if(cur2!=NULL)
        cur2=cur2->next;
        else
        cur2=head1;
    }
    return cur1->data;

}

