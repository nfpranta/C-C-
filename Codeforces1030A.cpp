#include<iostream>
using namespace std;
int main()
{
    int N,a,i,count=0;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>a;
        if(a==1) count++;
    }
    if(count>=1) cout<<"Hard"<<endl;
    else cout<<"Easy"<<endl;
}
