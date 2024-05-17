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
stack<int>st;
void func(node*&head){
    node*temp=head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}

int main(){
    vector<int>arr={1,2,3,4,5};
   node*head= inserttail(arr);
   func(head);
    return 0;
}