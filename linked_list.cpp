#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    //this creates a box of data and pointer
    int vardata;
    node*next;
    node(int paradata){
        vardata=paradata;
        next=NULL;
        /*works as well as
        this->vardata=paradata;
        this->next=NULL;
        */
    }
};
void insertAtTail(node *&head,int data){
    node*newhead=new node(data);
    newhead->next=head;
    head=newhead;
    
}
void print(node* &Head){
    node*temp=Head;
    while(temp!=NULL){
        cout<<temp->vardata<<" "; 
        temp=temp->next;
    }
}
int main(){
    node*head=new node(10);
    insertAtTail(head,30);
    cout<<head->vardata<<endl;
    print(head);
    return 0;
}