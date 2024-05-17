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

int detloop(node*head){
    if(head==NULL){return -1;}
    node*check=head;
    node*temp=head->next;
    bool x=0;
    while( temp!=NULL){
        if(temp->next==check){
            x=1;
            return x;
        }
            temp=temp->next;
    }
    //check=head->next;
    detloop(head->next);
    
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
   cout<< detloop(head);

    return 0;
}