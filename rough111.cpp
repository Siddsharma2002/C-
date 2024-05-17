#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int boxdata;
    node* boxptr;
    node(int data){
        boxdata=data;
        boxptr=NULL;
    }
};
// void insertAtHead(node*head,int data){
//     node*temp=new node(data);
//     temp=head->boxptr;
//     head=temp;
// }
void insertattail(node*&tail,int data){
    node*temp=new node(data);
    tail->boxptr=temp;
    tail=temp;
}
void calling(int arr[],int n,node* &head){
    int i=1;
    while(i<n){
        insertattail(head,arr[i]);
        i++;
    }
}
void print(node* & head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->boxdata;
        temp=temp->boxptr;
    }
}
int main(){
    int arr[]={3,4,5,6,7};
    node*head=new node(3);
    calling(arr,5,head);
    print(head);
    return 0;
}