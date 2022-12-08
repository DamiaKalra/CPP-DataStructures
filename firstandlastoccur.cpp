#include<iostream>
using namespace std;
//first occurence
int firstoccur(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstoccur(arr,n,i+1,key);
}
//last occurence
int lastoccur(int arr[],int n,int i,int key){
     if(i==n){
        return -1;
    }
    int restarray=lastoccur(arr,n,i+1,key);
    if(restarray!=-1){
    return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
int arr[]={1,5,3,7,9,3,2,1};
cout<<firstoccur(arr,8,0,7)<<endl;
cout<<lastoccur(arr,8,0,9)<<endl;
}