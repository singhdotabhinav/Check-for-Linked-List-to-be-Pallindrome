//Step 1:Traverse through the list and push on to stack
//Step 2:Traverse through list again and compare between stack top and start of linked list

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
    bool isPalindrome(ListNode* head) {
        
        stack<int> s;
        ListNode *temp=head;
        while(temp!=NULL){
            s.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(!s.empty()&&temp!=NULL){
            int num=s.top();
            s.pop();
            if(num!=temp->val){
                return false;
            }
            temp=temp->next;
              
        } 
         return true;
    }
};
