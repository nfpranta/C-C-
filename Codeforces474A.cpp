#include<bits/stdc++.h>
using namespace std;
#define  pb push_back
#define mp make_pair
int main()
{
    vector<string>s={"qwertyuiop","asdfghjkl;","zxcvbnm,./"};
    map<char,char>l,r;
    int i,j;
    char ch;
    string x;
    cin>>ch;
    cin>>x;
    for(i=0;i<3;i++)
    {
        for(j=0;j<9;j++){
            l.insert(mp(s[i][j],s[i][j+1]));
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=9;j>0;j--)
        {
            r.insert(mp(s[i][j],s[i][j-1]));
        }
    }
    if(ch=='L') {
        for(i=0;i<x.size();i++) cout<<l[x[i]];
    }
       if(ch=='R') {
        for(i=0;i<x.size();i++) cout<<r[x[i]];
    }
    cout<<endl;
    return 0;
}
