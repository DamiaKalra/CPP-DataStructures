#include<iostream>
using namespace std;
//dec
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
//inc
void inc(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
    int main(){
    int n;
    cin>>n;
dec(n);
inc(n);
}