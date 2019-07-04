#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m;
    string x,y,z;
    int a[10000],b[26][10000];
    cin>>n;
    cin>>x;
    for(i=0;i<x.length();i++){
        a[x[i]-'a']++;
        b[x[i]-'a'][a[x[i]-'a']]=i+1;
    }
    cin>>m;
    while(m--){
            memset(a,0,sizeof(a));
         int r=0;
        cin>>y;
        for(i=0;i<y.length();i++){
             a[y[i]-'a']++;
             r=max(r, b[y[i]-'a'][a[y[i]-'a']]);
        }
        cout<<r<<endl;
    }
}

