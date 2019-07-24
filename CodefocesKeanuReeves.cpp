#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c1=0,c0=0,t,r;
    cin>>n;
     string a,b,c;
        cin>>a;
     for(i=0;i<n;i++){
        if(a[i]=='0') c0++;
        else c1++;
     }
     if(c0!=c1){
        cout<<"1"<<endl<<a<<endl;
        return 0;
     }
     else {
cout<<2<<endl<<a.substr(0,a.length()-1)<<' '<<a[a.length()-1];
     }

    }
