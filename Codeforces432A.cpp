#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int i,j,c=0,l=0,x;
    vector<int>a;
    for(i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<n;i++){
        if(k+a[i]<=5){
            c++;
            if(c==3){
                l++;
                c=0;
            }
        }
    }
    cout<<l<<endl;

         }
