#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size of the array";
    int n;
   cin>>n;
   int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
//swap function
int temp;
int start=0;
int end=n-1;
while(start<end)
{
temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
}
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}