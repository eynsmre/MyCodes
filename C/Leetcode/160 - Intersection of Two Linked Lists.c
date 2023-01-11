/*
Q: Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
*/

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    // Create two pointers, tempA and tempB, to iterate through each linked list
    struct ListNode *tempA = headA, *tempB = headB;
    // Initialize variables to store the size of each linked list
    int sizeA = 0, sizeB = 0, size;
    
    // Iterate through linked list A and increment sizeA for each node
    while(tempA){
        sizeA +=1;
        tempA = tempA->next;
    }
    // Iterate through linked list B and increment sizeB for each node
    while(tempB){
        sizeB +=1;
        tempB = tempB->next;
    }
    // Reset tempA and tempB to the head of their respective linked lists
    tempA = headA;
    tempB = headB;

    // If linked list A is larger than linked list B
    if(sizeA > sizeB){
        // The difference in size will be the amount of nodes to advance tempA
        size = sizeA-sizeB;
        while(size >0){
            tempA = tempA->next;
            size--;
        }
    }
    // If linked list B is larger than linked list A
    if(sizeB > sizeA){
        // The difference in size will be the amount of nodes to advance tempB
        size = sizeB-sizeA;
        while(size >0){
            tempB = tempB->next;
            size--;
        }
    }
    // Iterate through both linked lists in parallel
    while(tempA && tempB){
        // If the current node of both tempA and tempB is the same, it is the intersection node
        if(tempA == tempB)
            return tempA;
        // Advance both tempA and tempB to the next node
        tempA = tempA->next;
        tempB = tempB->next;
    }

    // If there is no intersection node, return NULL
    return NULL;
}
