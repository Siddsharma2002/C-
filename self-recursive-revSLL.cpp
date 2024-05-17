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

node* revsll(node*&head,node*curr,node*prev){
   if(curr==NULL){ return prev;}
   node*temp=curr->next;
   curr->next=prev;
   prev=curr;
   curr=temp;
   revsll(head,curr,prev);
}
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    vector<int>arr={1,2,3,4,5};
    node*head= inserttail(arr);
    print(head);
    cout<<endl;
    node*head2=revsll(head,head,NULL);
    print(head2);
    return 0;
}