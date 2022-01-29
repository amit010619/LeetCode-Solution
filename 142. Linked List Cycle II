
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       /* 
        if(head==NULL || head->next==NULL)
            return NULL;
            */
       
        ListNode* slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                break;
                
            }
        }
            if(fast==NULL|| fast->next==NULL)
            {
                return NULL;
            }
          ListNode* ptr1=head;
          ListNode *p2=slow;
            while(ptr1!=p2)
            {
                ptr1=ptr1->next;
                p2=p2->next;
            }
        
        return ptr1;
    }
};
