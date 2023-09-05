/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         if(head == NULL) return NULL;
        
        Node* itr=head;
        Node* front=head;
       //  make copy of each node,
          // and link them together side-by-side in a single list.
        while(itr){
            front=itr -> next;
            Node* copy= new Node(itr->val);
           copy->next = front;
            itr->next=copy;
            itr=front;
        }
        // assign random pointers for the copy nodes
        itr=head;
        while(itr){
            if(itr->random){
                itr->next->random = itr->random->next;
            }
            itr=itr->next->next;
        }
        //  restore the original list, and extract the copy list.
        itr=head;
        Node* dummyHead=new Node(-1);
        Node * copy=dummyHead;
        front=head;
        
        while(itr){
            front=itr->next->next;
            // extract the copy
            copy->next=itr->next;
            // restore the original list
            itr->next=front;
            itr= front;
            copy=copy->next;
        }
        return dummyHead->next;
    }
};