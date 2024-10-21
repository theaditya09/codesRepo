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

    class compare{
        public:
        bool operator()(ListNode* a, ListNode* b)
        {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
    
    if(lists.size()==0) return NULL;

    priority_queue<ListNode*, vector<ListNode*>, compare> pq;

    for(int i=0; i<lists.size(); i++)
    {
        if(lists[i]!=NULL)
        pq.push(lists[i]);
    }

    ListNode* head = NULL;
    ListNode* tail = NULL;
    while(!pq.empty())
    {
        ListNode* top = pq.top();
        pq.pop();

        if(head == NULL)
        {
            head = top;
            tail = top;
            if(tail -> next != NULL)
            {
                pq.push(tail->next);
            }
        }
        else{
            tail -> next = top;
            tail = tail -> next;
            if(tail -> next != NULL)
            {
                pq.push(tail -> next);
            }
        }

    }

    return head;


    }
};