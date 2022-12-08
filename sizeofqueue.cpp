#include<iostream>
#include<queue>
using namespace std;
int main(){
    //create a queue
    queue<int> q;
    q.push(11);
    cout<<"front of q is:"<<q.front()<<endl;
 q.push(17);
  q.push(14);
  cout<<"size of queue:"<<q.size()<<endl;
q.pop();
    cout<<"size of queue:"<<q.size()<<endl;
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
}