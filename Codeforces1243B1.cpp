#include<bits/stdc++.h>
using namespace std;
#define pb push_back
void swap(char &a,char &b){
 char temp;
 temp=a;
 a=b;
 b=temp;
}
int main()
{
    int i,j,n,t,m;
    char c1,c2;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        cin>>n;
        string x,y;
        cin>>x>>y;
        int flag=0;


         for(i=0;i<n;++i)
         {
             if(x[i]!=y[i])
             {
                 v.pb(i);
             }
         }
         if(v.size()!=2)
         {
             cout<<"No"<<endl;
             continue;
         }

        if(x[v[0]]==x[v[1]] && y[v[0]]==y[v[1]]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}


