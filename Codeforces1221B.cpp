#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,q;
    char ch;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        for(j=1;j<=q;j++){
            if(i%2)
            {
                (j%2)? ch='W' : ch='B';
            }
            else {
                (j%2)? ch='B' : ch='W';
            }
            cout<<ch;
        }
        cout<<endl;
    }
}
