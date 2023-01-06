/**
* Q: Given head, the head of a linked list, determine if the linked list has a cycle in it.
*
* There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
*
* Return true if there is a cycle in the linked list. Otherwise, return false.
*/

/* Floyd's cycle-finding algorithm */

// This function takes in a pointer to the head of a singly linked list
// and returns a boolean value indicating whether the list has a cycle
bool hasCycle(struct ListNode *head) {

    // Return false if the list is empty
    if(head == NULL)
        return false;

    // Initialize two pointers: "faster" and "slower"
    struct ListNode* faster = head->next;
    struct ListNode* slower = head;

    // Iterate until either faster or faster->next is NULL
    while(faster && faster->next){
        // "faster" moves two steps forward for each iteration
        faster = faster->next->next;
        // "slower" moves one step forward for each iteration
        slower = slower->next;

        // If "faster" and "slower" point to the same node, there is a cycle
        if(faster == slower)
            return true;
    }

    // Return false if the loop ends before finding a cycle
    return false;
}
