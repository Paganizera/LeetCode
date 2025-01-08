/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public static ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if (list1 == null && list2 == null) return null;
        if (list1 == null) return list2;
        if (list2 == null) return list1;

        ListNode finalList = new ListNode();
        if (list1.val < list2.val) {
            finalList = list1;
            list1 = list1.next;
        } else {
            finalList = list2;
            list2 = list2.next;
        }

        ListNode aux = finalList;
        while (list1 != null && list2 != null) {
            if (list1.val < list2.val) {
                finalList.next = list1;
                list1 = list1.next;
            } else {
                finalList.next = list2;
                list2 = list2.next;
            }
            finalList = finalList.next;
        }
        if (list1 != null) finalList.next = list1;
        if (list2 != null) finalList.next = list2;

        return aux;
    }
}
