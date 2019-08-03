#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s,r,i;
    string a,b;
    cin>>m>>s;
    if(s==0){
        cout<<(m==1? "0 0": "-1 -1")<<endl;
        return 0;
    }
    for(i=0;i<m;i++){
        r=min(s,9);
        b+=r+'0';
        s-=r;
    }
    if(s>0){
        cout<<"-1 -1"<<endl;
        return 0;
    }
    for(i=m-1;i>=0;i--){
        a+=b[i];
        }
        for(i=0;a[i]=='0';i++);
        a[0]++;a[i]--;
        cout<<a<<" "<<b<<endl;
}
