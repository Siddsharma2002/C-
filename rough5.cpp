#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*prev;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
node*insertathead(node*tail,vector<int>arr){
    int n=arr.size();
    for (int i = 1; i < n; i++)
    {
        node*temp=new node(arr[i]);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    return tail;
}
void print(node*tail){
    node*temp=tail;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->prev;
    }
}
int main(){
    vector<int>arr={2,3,4,5,6};
    node*head=new node(2);
    node*tail=head;
    insertathead(tail,arr);
    print(tail);
    return 0;
}