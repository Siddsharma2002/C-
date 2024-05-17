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
void create(int data,node* &tail){
    node*temp=new node(data);
    //if(head!=NULL)head->prev=temp;
    tail->next=temp;
    if(tail!=NULL)temp->prev=tail;
    temp=tail;
}
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    node*head=new node(10);
    create(20,head);
    create(30,head);
    create(40,head);
    print(head);
    return 0;
}