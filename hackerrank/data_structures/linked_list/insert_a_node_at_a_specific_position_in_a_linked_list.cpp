/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node *node = head;
    if (position == 0)
    {
        node = new Node();
        node->data = data;
        node->next = head;
        return node;
    }
    else
    {
        while (--position > 0)
           node = node->next;
        
        Node *i = node->next;
        node->next = new Node();
        node->next->data = data;
        node->next->next = i;
        return head;
    }
}