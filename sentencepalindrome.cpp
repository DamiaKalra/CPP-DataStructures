#include<iostream>
using namespace std;
int main()
{
    string str = "Too hot to hoot.";
    int start=0;
    int end =str.length()-1;
     // Lowercase string
    for (int i = 0; i <= end; i++)
        str[i] = tolower(str[i]);
        //comparing the string
        while(start<end)
        {
            if(!(str[start]>='a'&&str[start]<='z'))
                start++;
            else if(!(str[end]>='a'&&str[end]<='z'))
                end--;
            else if(str[start] == str[end]){
                start++;
                end--;
            }
            else
           cout<<"not palindrome"<<endl;
        }
            cout<<"palindrome";
}