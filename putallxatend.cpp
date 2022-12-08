#include <iostream>
#include <cstring>
using namespace std;
string moveatend(string s)
{
    string cc = s.substr(0, 1);
    string cs = s.substr(1);
    // base case
    if (s.length() == 1)
    {
        return s;
    }
    // recursive case
    if (cc == "x")
    {
        return moveatend(cs) + cc;
    }
    else
    {
        return cc + moveatend(cs);
    }
}
int main()
{
    string s = "abcxcaxxbbaxx";                                  
    cout << moveatend(s) << endl;
    return 0;
}