#include<iostream>
using namespace std;
string moveatend(string s){
if(s.length()==0){
    return "";
}
char ch=s[0];
string ans=moveatend(s.substr(1));
//to put x at the end
if(ch=='x'){
    return ans+ch;
}
//to put ch at first
return ch+ans;
}
int main(){
    cout<<moveatend("asdxxsdxdfxrtxxxxxsdfgxx");
    return 0;
}