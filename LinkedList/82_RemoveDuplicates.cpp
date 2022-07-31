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
    ListNode* deleteDuplicates(ListNode* head) {
       map<int,int> a;
       ListNode* p=head;
       while(p!=NULL){
           a[p->val]+=1;
           p=p->next;
       }
       ListNode* q=new ListNode();
       ListNode* v=q;
       for(auto it=a.begin();it!=a.end();it++){
           if(it->second==1)
           {
               ListNode* l=new ListNode(it->first);
               v->next=l;
               v=v->next;
           }
       }
       return q->next;
    }
};
