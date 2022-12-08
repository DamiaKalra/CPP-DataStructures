#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool balancedbrackets(string expr){
    stack<char> temp;
for(int i=0;i<=expr.length();i++){
    if(temp.empty())
    {
        temp.push(expr[i]);
    }
    else if(temp.top()=='('&&expr[i]==')'|| (temp.top()=='{'&& expr[i]=='}')|| (temp.top()=='['&& expr[i]==']'))
 {
    temp.pop();
     }
     else{
        temp.push(expr[i]);
     }
}
if(temp.empty()){
return false;
}
return true;
}
int main(){
string expr="{()}[]";
if (balancedbrackets(expr))
cout<<"balanced";
else
cout<<"not balanced";
}
