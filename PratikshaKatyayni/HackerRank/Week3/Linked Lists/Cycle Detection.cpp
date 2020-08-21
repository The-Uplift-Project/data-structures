

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    unordered_set<SinglyLinkedListNode*> s;
    while(head!=NULL)
    {
        if(s.find(head)!=s.end())
        return true;
        s.insert(head);
        head=head->next;
    }
    return false;

}

