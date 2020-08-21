#include <bits/stdc++.h>
// Complete the reversePrint function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {
    if(head==NULL)
    return;
    reversePrint(head->next);
    cout<<head->data<<endl;

}

int main()