#include<iostream>
using namespace std;
int main(){
    cout<<"enter the no of packets";
    //p is packets
    //s is students
    int p;
    int s;
   cin>>p;
   int arr[p];
    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
    }
    cout<<"no of students";
      cin>>s;
    if(p==0||s==0)
    {
        cout<<"no students";
    }
    if(p<s)
    {
        return -1;
    }
    int z;
    		for(int i=0;i<p-1;i++){
			for(int j=i+1;j<p;j++){
				if(arr[j]<arr[i]){
				z=arr[j];    //a=b
				arr[j]=arr[i];     //b=c   
				arr[i]=z;       //c=a
				}
			}
	}
    int minD=INT16_MAX;

    for(int i=0;i+s-1<p;i++){
        int diff=arr[i+s-1]-arr[i];
              if (diff < minD)
                minD = diff;
    }
    cout<<"min diff is"<<minD;
}
	
