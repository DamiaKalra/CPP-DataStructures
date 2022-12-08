#include<iostream>
using namespace std;
void reverse(string s){
if(s.length()==0){
    return;
}
string z=s.substr(1);
reverse(z);
cout<<s[0];
}
int main(){
    reverse("damia");
}
