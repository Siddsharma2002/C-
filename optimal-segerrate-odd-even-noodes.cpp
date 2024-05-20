#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}
Node* detect(Node*head){
    if(head==NULL || head->next==NULL){
            return head;
        }
    Node*odd=head;
    Node*even=head->next;
    Node*tempeven=head->next;
    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;
        odd=odd->next;
        even=even->next;
    }
    odd->next=tempeven;
    return head;
}
int main(){
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    node1-> next = node2;
    Node* node3 = new Node(3);
    node2-> next = node3;
    Node* node4 = new Node(4);
    node3->next = node4;
    Node* node5 = new Node(5);
    node4-> next = node5;

    // Make a loop from node5 to node2
    node5->next = NULL;

    // Set the head of the linked list
    Node* head = node1;

    // Detect the loop in the linked list
    print(head);
    detect(head);
    cout<<endl;
    print(head);
    
    
    return 0;
}