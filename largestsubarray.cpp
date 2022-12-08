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
    //above is array input code
    int a=0;
    int k=INT8_MIN;
for(int i=0;i<n;i++)
{
    a=a+arr[i];
    //arr[i] means from  start to end where will our array will be taken
    if(k<a)
    k=a;
    //a<0 sum is atleast 0 negative will give us the more negative value 
    if(a<0)
    a=0;
}
cout<<k;
}