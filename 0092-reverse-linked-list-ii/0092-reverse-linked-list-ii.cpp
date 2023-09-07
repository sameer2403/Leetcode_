/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new  ListNode(-1);
        dummy->next=head;   
         ListNode* pre=dummy;
        //iterating till left-1
       
        int c=1;
        while( c<left){
            pre=pre->next;
            c++;
        }
       // 1 -> 2 -> 3 -> 4 ->5
      //  pre=1 preR=1, curr=2. curR=2
         ListNode* preR=pre;
        ListNode* curr=pre->next;
        ListNode* curR=curr;
        
        for(int i=left; i<=right; i++){
         ListNode*   next=curR->next;
            curR->next=preR;
            preR=curR;
            curR=next;
        }
        
        pre->next=preR;  //1 -> 4
        curr->next=curR;  //2 -> 5
        
        return dummy->next;     
    }
};