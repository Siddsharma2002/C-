#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insert(node*&tail,int data){
    node*temp=new node(data);
    tail->next=temp;
    tail=temp;
}
void func(int arr[],int n,node*&tail){
    for(int i=1;i<n;i++){
        insert(tail,arr[i]);
    }
}
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
void first(node* &head, int newvalue) {
    node*temp=new node(newvalue);
    temp->next=head;
    head=temp;
}
void findlength(node* &head ){
    node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    cout<<cnt;
}
bool search(node*&head, int k) {
    // Write your code here.
    node*temp=head;
    int flag=1;
    while(flag && temp!=NULL){
        if(temp->data==k){
            flag=0;
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

int main(){
    int arr[]={4,2,5,1};
   node*node1=new node(4);
   node*head=node1;
   node*tail=node1;
   func(arr,4,tail);
    print(head);
    cout<<endl;
    //first(head,0);
    //print(head);
    //cout<<endl;
    findlength(head);
    cout<<endl;
    cout<<search(head,7);
    return 0;
}