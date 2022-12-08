#include<iostream>
using namespace std;
//n is size of the 2d matrix
//x and y are the blocks we want to check
bool isSafe(int** arr,int x,int y,int n){
if(x<n&&y<n&&arr[x][y]==1){
    return true;
}
return false;
}
bool ratinMaze(int **arr,int x,int y,int n,int ** solArr){
    //base condition
    // condition for rat jis jgh pe chahte the us jgh pe puch gya hai
     if(x==n-1&&y==n-1){
solArr[x][y]=1;
return true;
     }
    if(isSafe(arr,x,y,n)){
        solArr[x][y]=1;
        // x+1 for moving in right direction
        if(ratinMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        //y+1 for moving in downward direction
                if(ratinMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        //backtracking
        solArr[x][y]=0;
        return false;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int ** arr=new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
        }
        //solution array
            int ** solArr=new int *[n];
    for(int i=0;i<n;i++){
        solArr[i]=new int[n];
        for(int j=0;j<n;j++){
            solArr[i][j]=0;
        }
    }
    if(ratinMaze(arr,0,0,n,solArr)){
            for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
        cout<<solArr[i][j]<<" ";
    }
    cout<<endl;
    }
    }
    return 0;
}