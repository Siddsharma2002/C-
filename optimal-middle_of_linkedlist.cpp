#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* inserttail(vector<int> arr){
    node*head=new node(arr[0]);
    node*tail=head;
    int n=arr.size();
    for (int i = 1; i <n; i++)
    {
        node*temp=new node(arr[i]);
        tail->next=temp;
        tail=temp;
    }
    return head;
}
node*find(node*&head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    head=slow;
    cout<<head->data;
    return head;
}
int main(){
    vector<int>arr={1,2,3,4,5};
   node*head= inserttail(arr);
   find(head);
    return 0;
}