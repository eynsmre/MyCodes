// Solution of LeetCode Problem 21 - Merge Two Sorted Lists
// Runtime 0 ms - Beats 100%
// Memory 41.7 MB - Beats 90.69%

//Logic: Compare two lists and put smaller into list result 

class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
    		
        
        //if both lists are null, return null.
        if(list1 == null && list2 == null)
            return null;
            
	   ListNode result = new ListNode();
        ListNode rest = result;
		
	   //loop until list1 and list2 reach end.
        while(list1 != null || list2 != null){
            if(list1 != null && list2!=null){
                if((list2.val > list1.val) && list1 != null){
                    rest.val = list1.val;
                    list1 = list1.next;
                }
                else if((list1 == null || list1.val >= list2.val) && list2 != null){
                    rest.val = list2.val;
                    list2 = list2.next;
                }
            }
            
            //if list1 is null (has finished) and list2 not, put list2 val into result.
            else if(list1 == null){
                rest.val = list2.val;
                list2 = list2.next;
            }
            //if list2 is null (has finished) and list1 not, put list1 val into result
            else if(list2 == null){
                rest.val = list1.val;
                list1 = list1.next;
            }
		
		 //if both lists has finished, don't create another box.
            if(list1!=null || list2!=null){
                rest.next = new ListNode();
                rest = rest.next;               
            }
        }
        return result;
    }
}