#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ret = head;

        while(ret && ret -> next){
            if(ret->val == ret -> next ->val){
                ret -> next = ret ->next ->next;
            }else{
                ret = ret -> next;
            }
        }

       return head;
    }
};

int main() {
    cout << "Enter sorted values (-1 to stop): ";

    int x;
    cin >> x;

    if (x == -1) return 0;

    ListNode* head = new ListNode(x);
    ListNode* tail = head;

    while(true){
        cin>>x;
        if(x == -1) break;
        
        tail -> next = new ListNode(x);
        tail = tail->next;
    }


    cout << "Filtered list :";

    Solution s;
    head = s.deleteDuplicates(head);

    ListNode* curr = head;
    while(curr){
        cout<< curr->val << ",";
        curr = curr->next;
    }


}
