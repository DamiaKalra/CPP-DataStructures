#include<iostream>
using namespace std;
void saydigits(int n,string arr[]){
//base case
if(n==0)
return;
//progressing
int digit=n%10;
n=n/10;
cout<<arr[digit]<<" ";
//recursive call
saydigits(n,arr);
}
int main(){
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl;
    saydigits(n,arr);
}