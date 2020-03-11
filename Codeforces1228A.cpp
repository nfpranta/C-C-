#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int l,r,k,x;
    cin>>l>>r;
    int i,j;
    bool flag=1;
    for(i=l;i<=r;i++)
    {
        k=i;
        flag=1;
        memset(a,0,sizeof(a));
        while(k>0)
        {
            a[k%10]++;
            k/=10;
        }
        for(j=0;j<=9;j++)
        {
            if(a[j]>1) {
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
