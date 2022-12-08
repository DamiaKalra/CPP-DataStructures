#include<iostream>
 #include<algorithm>
using namespace std;
string longestcommonprefix(string ar[],int n){
    if(n==0)
    return "";
    if(n==1)
    return ar[0];
    sort(ar,ar+n);
    for(int i=0;i<n;i++){
cout<<ar[i]<<endl;
    }
    int k=min(ar[0].size(),ar[n-1].size());
    string first= ar[0];
    string last= ar[n-1];
    int i=0;
    while(i<k&& first[i]==last[i])
    i++;
    string pre=first.substr(0,i);
    return pre;
}
int main(){
    string ar[]={
        "tree","treet","treat","treetss"
    };
    int n= sizeof(ar)/sizeof(ar[0]);
    cout<<"largest common prefix is: "<<
    longestcommonprefix(ar,n);
    return 0;
}