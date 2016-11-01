/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    if(head == NULL)
    {
        Node *node = new Node();
        node->data = data;
        return node;
    }

    Node *node = head;
    while (node != NULL)
    {
        if (node->data >= data)
        {
            Node *i = new Node();
            i->data = data;
            i->prev = node->prev;
            i->next = node;
            node->prev = i;
            if (i->prev == NULL)
            {
                return i;
            }
            else 
            {
                i->prev->next = i;
                return head;
            }
        }
        if (node->next == NULL)
        {
            Node *i = new Node();
            i->data = data;
            i->prev = node;
            i->next = NULL;
            node->next = i;
            break;
        }
        node = node->next;
    }
    return head;
}