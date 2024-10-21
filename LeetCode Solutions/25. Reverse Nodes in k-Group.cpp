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
    ListNode* reverseKGroup(ListNode* head, int k) {

        if(head == NULL)
        {
            return NULL;
        }

    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = curr -> next;
    int count = 1;
    
    bool check = true;
    ListNode* tmpcheck=head;

    while(count<k)
    {
        tmpcheck = tmpcheck -> next;
        if(tmpcheck==NULL)
        {
            count=0;
            check = false;
            break;
        }
        count++;
    }

    if(!check)
    {
        return head;
    }

    count = 0;
    while(count<k && curr!=NULL && check)
    {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next!=NULL)
    {
        head -> next = reverseKGroup(next, k);
    }
    return prev;
        
    }
};