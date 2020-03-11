#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,len;
    string x;
    cin>>x;
    len=x.length();
    map<char,int>a;
    bool flag=1;
    for(i=0;i<len;i++)
    {
        a[x[i]]++;
    }
    if(a['a']<1 || a['b']<1 || (a['c']!=a['a'] && a['c']!=a['b']) )
    {
        flag=0;
    }
    for(i=0;i<len-1;i++)
    {
        if(((x[i]=='b' || x[i]=='c') && x[i+1]=='a') || (x[i]=='c' && x[i+1]=='b'))
        {
            flag=0;
            break;
        }
    }
        if(!flag)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else cout<<"YES"<<endl;
}
