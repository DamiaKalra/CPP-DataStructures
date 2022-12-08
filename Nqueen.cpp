#include<iostream>
using namespace std;
bool isSafe(int** arr,int x,int y,int n){
for(int row=0;row<x;row++){
    //1 means queenis present 0 means queen is not present
    if(arr[row][y]==1){
return false;
    }
}
int row=x;
int col=y;
//row and column minus krte krte 0 se km tooh nhi ho gya isiliye while loop
//loop for left diagonal
while(row>=0&&col>=0){
    if(arr[row][col]==1){
        return false;
    }
    row--;
    col--;
}
//loop for right diagonal
row=x;
 col=y;
//col<n beacause board se bahr hi n nikl jaye
while(row>=0&&col<n){
    if(arr[row][col]==1){
        return false;
    }
    row--;
    col++;
}
return true;
}
// here in bool nqueen we dont need y because once we have placed the queen we dont need to check for  further columns in that particular row
bool nQueen(int** arr,int x,int n){
    if(x>=n){
        return true;
    }
    // checking the position if that is safe for queen to place or not
    for(int col=0;col<n;col++){
        if(isSafe(arr,x,col,n)){
            arr[x][col]=1;

            if(nQueen(arr,x+1,n)){
                return true;
            }
            //backtracking
            arr[x][col]=0;
        }
    }
    //false because we are not able to place the queen
    return false;
}
int main(){
int n;
cin>>n;
int** arr=new int *[n];
for(int i=0;i<n;i++){
arr[i]=new int [n];
for(int j=0;j<n;j++){
    arr[i][j]=0;
}
}
if(nQueen(arr,0,n)){
    for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    cout<<arr[i][j]<<" ";
}cout<<endl;
}
}
}