/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    int headALen = 0;
    int headBLen = 0;
    Node *headACopy = headA;
    Node *headBCopy = headB;
    
    while (headACopy != NULL)
    {
    	headACopy = headACopy->next;
    	headALen++;
    }

    while (headBCopy != NULL)
    {
    	headBCopy = headBCopy->next;
    	headBLen++;
    }

    while (headALen > headBLen)
    {
    	headA = headA->next;
    	headBLen--;
    }

    while (headBLen > headALen)
    {
    	headB = headB->next;
    	headBLen--;
    }

    while (headA != NULL)
    {
    	if (headA == headB)
    		return headA->data;
    	headA = headA->next;
    	headB = headB->next;
    }
    return -1;
}
