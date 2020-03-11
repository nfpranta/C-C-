#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t,a;
    bool flag;
    cin>>t;
    string x,y;
    while(t--)
    {
        flag=1;
        i=0;
        cin>>n;
        cin>>x>>y;
       a=1;
       while(1){
        if(a==1){
        if(x[i]<'3')
        {
            i++;
           if(i==n)
           {
               flag=0;
               break;
           }
        }
        else
        {
            if(y[i]<'3')
            {
                flag=0;
                break;
            }
            else {
                a=2;
                i++;
                if(i==n)break;
            }
        }
    }
    else {
        if(y[i]<'3')
        {
            i++;
            if(i==n) break;
        }
        else {
            if(x[i]<'3')
            {
                flag=0;
                break;
            }
            else
            {
                a=1;
                i++;
                if(i==n){
                    flag=0;
                break;
            }
        }
    }
}
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
