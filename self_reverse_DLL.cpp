#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node*next;
        node*prev;
        node(int data){
            this->data;
            this->next=NULL;
            this->prev=NULL;
        }
};
node*create(node*tail,int data){
    node*temp=new node(data);
    temp->next=tail;
    tail->prev=temp;
    tail=temp;
}

node* reverseDLL(node* head)
{   
    // Write your code here 
    node*temp=head;
    node*tail=head;
    int ele;
    while(temp->next!=NULL){
         ele=temp->data;
        temp=temp->next;
        create(tail,ele);
    }  
    return temp;
}
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    vector<int>arr={2,4,6,8,10};
  node*head=new node(2);
  reverseDLL(head);
    
    print(head);
    return 0;
}