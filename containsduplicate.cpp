#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size of the array";
    int n;
   cin>>n;
   int arr[n];
     cout<<"array elements are";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
    {
        if(arr[i]==arr[j])
        cout<<"yes"<<" duplicate no is " << arr[i];
        break;
    }
    cout<<"no";
    }
    }
}


