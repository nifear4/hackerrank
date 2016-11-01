/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    if (headA == NULL && headB == NULL)
        return 1;

    while (headA->data == headB->data)
    {
        if (headA->next == NULL)
        {
            if (headB->next == NULL)
                return 1;
            else
                return 0;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return 0;
}
