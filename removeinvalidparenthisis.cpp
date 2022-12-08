//this code has just the logic but it is not working 
// code from yt code with alisha
class solution{
    public:
    string removetomakevalid(string s){
    stack<int>st;
//start iterating over the str
for(int i=0;i<s.size();i++){
if(s[i]=='(')
st.push(i);
else if(s[i]==')')
{
    if(!st.empty() && s[st.top()]==')')
    st.pop();
    else st.push(i);
}
}
//indexes are stored in the stacks elements so that we can particularly remove thode brackets present at that particular index and index are left at the end in stack which doesent have a pair
while(!st.empty()){
    //,1 just have to erase one particular char
    s.erase(st.top(),1);
    st.pop();
}
return s;
    }
};
