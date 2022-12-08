#include<iostream>
using namespace std;
void permutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //basicall + k pehle part se fix char k pehle ki string milegi aur bad k part k +k bad wali string milegi
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }
}
int main(){
    permutation("ABC"," ");
    return 0;
}
