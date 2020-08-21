#include <bits/stdc++.h>



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

  SinglyLinkedListNode* node = head;
    if(head ==NULL){
        return head  ;
    }
    while(head->next != NULL){
        if (head->data == head->next->data){
            head->next = head->next->next;
        }
        else {
            head = head->next;
        }
    }
    return node;
}

int main()