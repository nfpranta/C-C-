#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    map<string,int>a;
    map<string,int>b;
    string x[n+1];
    bool flag=1;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        a[x[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(a[x[i]]==1)
        {
            cout<<"NO"<<endl;
        }
        else {
            b[x[i]]+=1;
            if(b[x[i]]==1){
                cout<<"NO"<<endl;
            }
            else {
                cout<<"YES"<<endl;
            }
        }
    }
}
