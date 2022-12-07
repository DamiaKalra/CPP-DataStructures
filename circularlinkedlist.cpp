#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node* next;
    //constructor
    node(int d){
        this->data=d;
        this->next=NULL;
    }
    //destructor
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};
void insertnode(node* &tail,int element,int d){
    //empty list
    if(tail==NULL){
        node* newnode=new node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        //non empty list
        //assuming that the element is present in the list
        node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element found -> cur is representing element wala node
        node* temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(node* tail){
node* temp=tail;
do{
cout<<tail->data<<" ";
tail=tail->next;
}
while(tail!=temp);
cout<<endl;
}
//delete is not working
void deletenode(node* &tail,int value){
    //empty list
    if(tail==NULL){
        cout<<" list is empty plz try again"<<endl;
        return;
    }
else{ 
    //nonempty
        //asssuming that the value is present in  the linked list
        node* prev=tail;
        node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(tail==curr){
            tail=prev;
        }
        curr=curr->next;
        delete curr;
}
}
    int main(){

        node* tail=NULL;
        //inserting in empty list
        insertnode(tail,5,3);
        print(tail);

          insertnode(tail,3,5);
        print(tail);

          insertnode(tail,5,7);
        print(tail);

         insertnode(tail,7,9);
        print(tail);

         insertnode(tail,5,6);
        print(tail); 

           insertnode(tail,9,10);
        print(tail);

           insertnode(tail,3,4);
        print(tail);

          deletenode(tail,3);
        print(tail);
        return 0;
    }
