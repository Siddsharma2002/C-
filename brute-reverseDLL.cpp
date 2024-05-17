#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
node* insertathead(int arr[],int n){
    node*head=new node(arr[0]);
    node*tail=head;
    for (int i = 1; i < n; i++)
    {
        node*temp=new node(arr[i]);
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
    return head;
}

stack <int> st;

void store(node*&head){
    node*temp=head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
}

void convert(node*&head){
    node*temp=head;
    while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
}

void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    int arr[]={2,4,6,8,10};
    node*head=insertathead(arr,5);
    store(head);
    convert(head);
    print(head);
   
    
    return 0;
}