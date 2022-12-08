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
    int min=INT8_MAX;
    int max=INT8_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
          if(arr[i]>max)
        {
            max=arr[i];
        }
    }
     cout<<"min"<<min<<endl;
    cout<<"max"<<max;
    return 0;

}