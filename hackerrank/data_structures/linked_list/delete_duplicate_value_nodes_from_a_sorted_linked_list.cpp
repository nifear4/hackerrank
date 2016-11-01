/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    Node *node = head;
    if (head == NULL)
        return NULL;

    while (head->next != NULL)
    {
        if (head->data == head->next->data)
            head->next = head->next->next;
        else
            head = head->next;
    }
    return node;
}
