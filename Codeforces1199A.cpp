#include<bits/stdc++.h>
using namespace std;
 vector<long long int>a;

int main()
{
    int n,x,y,k;
   cin>>n>>x>>y;
    int c,i,j;
    for(i=0;i<n;i++){
            cin>>k;
            a.push_back(k);
    }
    for(i=0;i<n;i++){
        j=i-1;
        c=x;
        while(j && c && a[j]>a[i]){
            j--;
            c--;
        }
        if(j<1 || !c ){

            j=i+1;
            c=y;
            while(j<=n && c && a[j]>a[i]){
                j++;
                c--;
                }
                if(j>=n || !c){
                    cout<<i+1;
                    return 0;
                }
            }
    }
    return 0;
}
