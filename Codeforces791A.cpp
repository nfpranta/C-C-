#include<iostream>
using namespace std;
int main()
{
    int N,a,b,count=0,i;
    cin>>a>>b;
    for(i=1;a<=b;i++){
        a*=3;
        b*=2;
        count++;
    }
    cout<<count<<endl;
}
