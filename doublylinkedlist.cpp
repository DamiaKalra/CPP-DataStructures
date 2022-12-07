#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    //constructor
    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
//traversing a linked list
void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<endl;
}
//gives length of a linked list
int getlength(node* head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertathead(node* &head,int d){
    //to handel empty list
    // if(head==NULL){
    //     node* temp=new node(d);
    //     head=temp;
    //     tail=temp;
    // }
    // else{
    //     node* temp=new node(d);
    //     temp->next=head;
    //     head->prev=temp;
    //     head=temp;
    // }
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertattail(node* &tail,int d){
    //  if(tail==NULL){
    //     node* temp=new node(d);
    //     tail=temp;
    //     head=temp;
    // }
    // else{
    //     node* temp=new node(d);
    //     temp->next=tail;
    //     tail->prev=temp;
    //     tail=temp;
    // }
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
} 
int main(){
    node* node1=new node(10);
    node* head=node1;
     node* tail=node1;
    print(head);
    cout<<getlength(head)<<endl;
    insertathead(head,11);
    print(head);
    insertattail(tail,25);
        print(head);
          insertathead(head,19);
    print(head);
     insertattail(tail,63);
        print(head);
    return 0;
}