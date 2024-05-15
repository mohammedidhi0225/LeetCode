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
    bool isPalindrome(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* current = head;
        while(current != nullptr){
            current = current -> next;
            ++size;
        }
        if(size % 2 == 0){
            size = size / 2;
            current = head;
            while(current != nullptr){
                if(size <= 0){
                    if(prev -> val != current -> val){
                        return false;
                    }
                    else{
                        prev = prev -> next;
                        current = current -> next;
                    }
                }
                else{
                    temp = current->next;
                    current -> next = prev;
                    prev = current;
                    current = temp;
                    --size;
                }
            }
        }
        else{
             size = size / 2;
             current = head;
             while(current != nullptr){
                if(size < 0){
                    if(prev -> val != current -> val){
                        return false;
                    }
                    else{
                        prev = prev -> next;
                        current = current -> next;
                    }
                }
                else if(size == 0){
                    current = current -> next;
                    --size;
                }
                else{
                    temp = current->next;
                    current -> next = prev;
                    prev = current;
                    current = temp;
                    --size;
                }
            }
        }
        return true;
        
    }
};