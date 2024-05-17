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
node* insertattail(vector<int>arr,int n){
     node*node1=new node(arr[0]);
    node*head=node1;
    node*tail=node1;
    for (int i = 1; i < n; i++)
    {
        node*temp=new node(arr[i]);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    return head;
}
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
void insertatend(node*head,int k){
    node*temp=new node(k);
    node*mover=head;
    while(mover!=NULL){
        mover=mover->next;
    }
    mover->next=temp;
    temp->prev=mover;
}
void deletenode(node*head){
    node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next->next->prev=NULL;
    delete temp->next->next;
    temp->next=NULL;
    
}
node* reverseDLL(node* head)
{   
    // Write your code here   
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    while(temp->prev!=NULL){
        node*newnode=new node(temp->data);
        temp=temp->prev;
    }

}
int main(){
    vector<int>arr={2,4,6,8,10};
  node*head=insertattail(arr,5);
    
    print(head);
    return 0;
}