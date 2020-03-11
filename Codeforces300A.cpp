#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,z,pos=0,negi=0;
    cin>>n;
    int a[n+3];
    for(i=0;i<n;i++) {
            cin>>a[i];
      if(a[i]>0) pos++;
      else if(a[i]<0) negi++;
    }
    sort(a,a+n);
    cout<<1<<" "<<a[0]<<endl;//set1
    if(pos)
    {
        for(i=1;i<n;i++)
        {
            if(a[i]>0) {cout<<1<<" "<<a[i]<<endl; //set2
             j=i-1;break;}
        }
        i++;
        cout<<pos-1+negi-1+1<<" "<<0<<" ";//set3
        for(; i<n;i++) cout<<a[i]<<" ";
        for( ;j>0;j--) if(a[j]<0) cout<<a[j]<<" ";
        cout<<endl;
    }
    else {
            cout<<2<<" "<<a[1]<<" "<<a[2]<<endl;//set2
          cout<<negi-3+1<<" "<<0<<" ";
            for(i=3;i<n;i++) if(a[i]<0) cout<<a[i]<<" ";
            cout<<endl;
}
}

