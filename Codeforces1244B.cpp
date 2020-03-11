#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,p,q,n,m;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>n>>x;
        if(x[0]=='1' || x[n-1]=='1')
        {
            cout<<2*n<<endl;
        }
        else
        {
            p=-1,q=-1;
            for(i=0;i<n;i++)
            {
                if(x[i]=='1')
                {
                    p=i;
                    break;
                }
            }
            if(p==-1)
            {
                cout<<n<<endl;
                continue;
            }
            for(i=n-1;i>=0;i--)
            {
                if(x[i]=='1')
                {
                    q=i;
                    break;
                }
            }
            cout<<max((n-p)*2,(q+1)*2)<<endl;
        }
    }
}
