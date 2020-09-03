#include <bits/stdc++.h>
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
 
    SinglyLinkedListNode* pos1=head1;
    SinglyLinkedListNode* pos2=head2;
    while(pos1!=NULL&&pos2!=NULL)
    {
        if(pos1->data==pos2->data)
        {
            pos1=pos1->next;
            pos2=pos2->next;
        }
        else
        return false;
    }
    if(pos1==NULL&&pos2==NULL)
    return true;
    else
    return false;

}

int main()