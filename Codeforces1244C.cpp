#include<bits/stdc++.h>
using namespace std;
#define int long long int
 main()
{
    int i,j,n,p,w,d,temp,x,y,z;
    cin>>n>>p>>w>>d;
    for(y=0;y<=w;y++)
    {
        temp=p-y*d;
        if(temp%w==0)
        {
            x=temp/w;
            if(x>=0 && y>=0 && x+y<=n)
            {
                z=n-(x+y);
                cout<<x<<" "<<y<<" "<<z<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
}
