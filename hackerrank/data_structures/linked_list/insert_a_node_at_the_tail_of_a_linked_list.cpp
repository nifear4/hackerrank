/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head, int data)
{
    Node *trueHead = head;
    Node *node = new Node();
    node->data = data;
    node->next = NULL;
    
    if (head == NULL)
    {
        head = new Node();
        head->data = data;
        return head;
    }
    else
    {
        Node *node = head;
        while (node->next != NULL)
        {
            node = node->next;
        }
        node->next = new Node();
        node->next->next = NULL;
        node->next->data = data;
        return head;
    }
}