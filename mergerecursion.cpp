//This code is not working
#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
  int mid=(s+e)/2;
   int len1=mid-s+1;
   int len2=e-mid;
   //array 1
   int *first=new int[len1];
   //array 2
   int *second=new int[len2];
   //copy values
   int mainArrayIndex=s;
   for(int i=0;i<len1;i++){
    first[i]=arr[mainArrayIndex++];
   }
    mainArrayIndex=mid+1;
      for(int i=0;i<len2;i++){
    second[i]=arr[mainArrayIndex++];
   }
   //merge 2 sorted arrays
   int index1=0;
   int index2=0;
    // mainArrayIndex=s;
while(index1<len1&& index2<len2){
if(first[index1]<second[index2]){
    arr[mainArrayIndex++]=first[index1++];
}
else{
    arr[mainArrayIndex++]=second[index2++];
}
}
while(index1<len1){
    arr[mainArrayIndex++]=first[index1++];
}
while(index2<len2){
    arr[mainArrayIndex++]=second[index2++];
}
}
void mergesort(int *arr,int s,int e){
//base case
if(s>=e){
    return;
}
int mid=(s+e)/2;
//sort left part
mergesort(arr,s,mid);
//sort right part
mergesort(arr,mid+1,e);
//merge
merge(arr,s,e);
}
int main(){
int arr[5]={6,8,4,3,9};
int n=5;
mergesort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}