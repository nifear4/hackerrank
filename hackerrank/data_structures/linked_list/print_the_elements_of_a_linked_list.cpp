/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
   int data;
   struct Node *next;
  }
*/
void Print(Node *head)
{
    if (!head) return;
    while (head)
    {
        cout << head->data << endl;
        if (head->next != NULL)
            head = head->next;
        else
            return;
    }
}