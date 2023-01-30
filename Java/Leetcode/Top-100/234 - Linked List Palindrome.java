234

class Solution {
    public boolean isPalindrome(ListNode head) {
        StringBuilder sb = new StringBuilder();
        ListNode temp = head;
        while(temp!=null){
            sb.append(temp.val + "");
            temp = temp.next;
        }
        String c = sb.toString();
        sb.reverse();
        return c.equals(sb.toString());
    }
}