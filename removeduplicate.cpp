#include<iostream>
#include<string>
using namespace std;
string removedup(string s){
    if(s.length()==0){
        return "";
    }
    //store first char in ch
    char ch =s[0];
    //function call for rest of the string
    string ans=removedup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);

}
int main(){
    string s;
cout<<removedup("aaabbbccddefghtbb")<<endl;
}