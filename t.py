# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    addTwoNumbers(self, l1, l2):
    def addTwoNumbers(l1, l2):
    # Create a new linked list to store the result
    result = new LinkedList()
    
    # Set up two pointers to traverse l1 and l2
    p1 = l1.head
    p2 = l2.head
    
    # Set up a carry variable to track any carry over from the previous digit
    carry = 0
    
    # Loop through l1 and l2 until we reach the end of both lists
    while p1 is not null and p2 is not null:
        # Add the two digits and the carry
        sum = p1.val + p2.val + carry
        
        # If the sum is greater than or equal to 10, set the carry to 1
        # and subtract 10 from the sum
        if sum >= 10:
            carry = 1
            sum -= 10
        else:
            carry = 0
        
        # Append the sum to the result list
        result.append(sum)
        
        # Move both pointers to the next node
        p1 = p1.next
        p2 = p2.next
    
    # If either l1 or l2 has more digits, add them to the result
    while p1 is not null:
        sum = p1.val + carry
        if sum >= 10:
            carry = 1
            sum -= 10
        else:
            carry = 0
        result.append(sum)
        p1 = p1.next
    
    while p2 is not null:
        sum = p2.val + carry
        if sum >= 10:
            carry = 1
            sum -= 10
        else:
            carry = 0
        result.append(sum)
        p2 = p2.next
    
    # If there is still a carry left over, append it to the result
    if carry == 1:
        result.append(1)
    
    return result
