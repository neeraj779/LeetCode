class Solution
{
private:
  void insertAtTail(Node *&head, Node *&tail, int data)
  {
    Node *toInsert = new Node(data);
    if (head == NULL)
    {
      head = toInsert;
      tail = toInsert;
      return;
    }

    tail->next = toInsert;
    tail = toInsert;
  }

public:
  Node *copyRandomList(Node *head)
  {
    // Step 1: Clone the original list by creating new nodes with the same values
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
      insertAtTail(cloneHead, cloneTail, temp->val);
      temp = temp->next;
    }

    // Step 2: Insert cloned nodes in between original nodes
    Node *originalNode = head;
    Node *cloneNode = cloneHead;
    while (originalNode != NULL)
    {
      Node *next = originalNode->next;
      originalNode->next = cloneNode;
      originalNode = next;

      next = cloneNode->next;
      cloneNode->next = originalNode;
      cloneNode = next;
    }

    // Step 3: Copy random pointers from original nodes to their clones
    temp = head;
    while (temp != NULL)
    {
      if (temp->next != NULL)
        temp->next->random = (temp->random) ? temp->random->next : temp->random;
        
      temp = temp->next->next;
    }

    // Step 4: Revert changes to original list
    originalNode = head;
    cloneNode = cloneHead;
    while (originalNode != NULL)
    {
      originalNode->next = cloneNode->next;
      originalNode = originalNode->next;

      if (originalNode != NULL)
      {
        cloneNode->next = originalNode->next;
        cloneNode = cloneNode->next;
      }
    }
    return cloneHead;
  }
};

//     // Initialize pointers to the head and tail of the cloned linked list
//     Node *cloneHead = NULL;
//     Node *cloneTail = NULL;

//     Node *temp = head;
//     while (temp != NULL)
//     {
//       insertAtTail(cloneHead, cloneTail, temp->val);
//       temp = temp->next;
//     }

//     // Create a map to store the mapping between old nodes and new nodes
//     unordered_map<Node *, Node *> oldToNew;

//     Node *originalNode = head;
//     Node *cloneNode = cloneHead;

//     // Traverse the original and cloned linked lists in parallel
//     // and store the mapping between old and new nodes in the map
//     while (originalNode != NULL)
//     {
//       oldToNew[originalNode] = cloneNode;
//       originalNode = originalNode->next;
//       cloneNode = cloneNode->next;
//     }

//     // Traverse the original and cloned linked lists in parallel again,
//     // this time updating the random pointers of the cloned nodes using
//     // the mapping stored in the map
//     originalNode = head;
//     cloneNode = cloneHead;
//     while (originalNode != NULL)
//     {
//       cloneNode->random = oldToNew[originalNode->random];
//       originalNode = originalNode->next;
//       cloneNode = cloneNode->next;
//     }

//     // Return the head of the cloned linked list
//     return cloneHead;
//   }
// };