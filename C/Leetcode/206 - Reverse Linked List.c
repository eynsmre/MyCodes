/**
* Q:
* Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

// This function takes in a pointer to the head of a singly linked list
// and returns a pointer to the head of the reversed list
struct Node* reverseList(struct ListNode* head) {

  // Initialize three pointers: "prev", "current", and "next"
  struct ListNode* prev = NULL;
  struct ListNode* current = head;
  struct ListNode* next;

  // Iterate through the list until "current" is NULL
  while (current != NULL) {
    // Store the value of "current->next" in "next"
    next = current->next;
    // Reverse the current node's pointer
    current->next = prev;
    // Move "prev" and "current" one step forward
    prev = current;
    current = next;
  }

  // Return the new head of the reversed list
  return prev;
}
