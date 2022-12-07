#include<iostream>
using namespace std;
class node {
public:
int data;
//node * ka ek pointer jo next node ko represent kar ra
node* next;
//parametrized constructor
node(int data){
    this->data=data;
    this->next=NULL;
}
//destructor
~node(){
    int value=this->data;
    //memory free
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
cout<<"memory free  for node with data "<<value<<endl;
}

};
//here referece is taken because we do not want want 
//any copy to be created we want original linked list
// to get change by inserting element
void insertathead(node * &head,int d){
//new node create
node* temp= new node(d);
temp->next=head;
head=temp;
}
//insret at tail
void insertattail(node* &tail,int d){
//new node create
node* temp= new node(d);
tail->next=temp;
tail=tail->next;
//tail=temp;
}
void print(node* &head){
node* temp=head;
while(temp!=NULL){
    //temp ki value print krate jao
    cout<<temp->data<<" ";
    //temp ko temp k nedxt pe point kra do
    temp=temp->next;
}
cout<<endl;
}
//insertatposition
void insertatposition(node* &tail,node* &head,int position,int d){
    node* temp=head;
    int cnt=1;
    while( cnt < position-1){
        temp=temp->next;
        cnt++;
    }
    //insert at start
    if(position==1){
        insertathead(head,d);
        return;
    }
    //inserting at last position
    if(temp->next== NULL){
        insertattail(tail,d);
        return;
    }
//creating a node for d
node* nodetoinsert=new node(d);
nodetoinsert->next=temp->next;
temp->next=nodetoinsert;
}
//deletion
void deletenode(int position,node* &head){
    //deleting first or start node
    if(position==1){
        node* temp=head;
        head=head->next;
        //memory free start node
        temp->next=NULL;
            delete temp;
    }
    else{
        //deleting any middle node or last node
            node* curr=head;
            node*prev=NULL;
            int cnt=1;
            //for position
            while(cnt<=position){
                prev=curr;
                curr=curr->next;
                cnt++;
            }
            //for last
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
    }
}
int main(){
    //created a new node
    node* node1=new node(10);
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;
    //head pointed to node1
    node* head=node1;
    //tail pointed to node1
    node* tail=node1;
    print(head);
    // insertathead(head,12);
    insertattail(tail,12);
    print(head);
       insertattail(tail,15);
    print(head);
    //insert at position
    insertatposition(tail,head,3,22);
        print(head);
        //delete
        deletenode(1,head);
        print(head);
    return 0;
}