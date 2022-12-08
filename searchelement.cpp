#include<iostream>
using namespace std;
int search(int arr[],int start,int end, int key){
    if (start>end)
    return -1;
 
 int mid=(start+end)/2;
if (arr[mid]==key)
return mid;

if(arr[start]<=arr[mid]){
if(key>=arr[start]&&key<=arr[mid]){
return search(arr,start,mid-1,key);
}
return search(arr,mid+1,end,key);
}
if(key>=arr[mid]&&key<=arr[end]){
return search(arr,mid+1,end,key);
}
return search(arr,start,mid-1,key);
    }
int main(){
    cout<<"enter the size of the array";
    int n;
   cin>>n;

 int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
       cout<<"enter the element u want to search";
       cin>>key;
       int s=search(arr,0,n-1,key);
          if (s != -1)
          {
        cout << "Index: "<<s;
          }
    else{
        cout << "Key not found";
    }
        return 0;
}
