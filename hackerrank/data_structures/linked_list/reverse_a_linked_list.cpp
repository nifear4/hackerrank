/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        Node *node = NULL;
        while (head)
        {
            Node *i = node;
            node = new Node();
            node->data = head->data;
            node->next = i;
            head = head->next;
        }
        return node;
    }
}
