/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/
bool has_cycle(Node* head) 
{
    if (head == NULL)
    	return false;

    Node *tortoise = head;
    Node *hare = head;

    while (tortoise != NULL && tortoise->next != NULL)
    {
    	tortoise = tortoise->next;
    	hare = hare->next->next;
    	if (hare == NULL || tortoise == NULL)
    		return false;

    	if (hare == tortoise)
    		return true;
    }
    return false;
}
