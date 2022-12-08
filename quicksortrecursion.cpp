//this code is working fine
#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    //pivot element will be the first element
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivot at right position
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);
    //left and right wala part means swap krne k bad left elements
    // must be small and right element must be greater
    //here i and j are two pointers
    int i=s, j=e;
     while(i<pivotIndex&&j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
     }
     return pivotIndex;
     }
void quicksort(int arr[],int s,int e){
//base case
if(s>=e)
{
    return;
}
//partition
int p=partition(arr,s,e);
//sort left part
quicksort(arr,s,p-1);
//sort right part
quicksort(arr,p+1,e);
}
int main(){
    int arr[5]={3,4,1,9,7};
    int n=5;
    quicksort(arr,0,n-1);
    //printing sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
return 0;
}