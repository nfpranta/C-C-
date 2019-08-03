#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0,untreated=0,t;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>t;
        if(t>0) cnt+=t;
        else {
            if(cnt<1){
                untreated++;
            }
            else cnt--;
        }
    }

cout<<untreated<<endl;
}
