//Leetcode AddTwoNumbers - Problem 2 solution
//Logic: Basic school math.
//        373
//        772       Start adding from last.
//       +___	    Given values already reversed
//       1145       so it is easier to fix.          

class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode res = new ListNode(0);
        ListNode current = res;
        int carry = 0;
        
        while(l1!=null || l2!=null || carry != 0){
            
            int sum = (l1!=null) ? ((l2!=null) ? l1.val + l2.val + carry : l1.val + carry) : (l2!=(null) ? l2.val +carry : carry);
            current.next = new ListNode(sum % 10);
            carry = sum / 10;
            
            if(l1!=null)
                l1 = l1.next;
            if(l2!=null)
                l2 = l2.next;
            
            current = current.next;
        }
        
        
        return res.next;
    }
}