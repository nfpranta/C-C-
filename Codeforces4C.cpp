#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    scanf("%d",&n);
    string s;
    map<string, int>x;
    for(i=0;i<n;i++){
        cin>>s;
        if(x[s]==0){
            printf("OK\n");
            x[s]=1;
        }
        else {
            cout<<s<<x[s]<<endl;
            x[s]++;
        }
    }

}

