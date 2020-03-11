#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,cnt=0;
    cin>>n;
    string x;
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(x[i]=='8') cnt++;
    }
    if(cnt==0 || n<11)
   {
       cout<<0<<endl;
       return 0;
   }
   n=n-(n%11);
   int div=n;
 //  cout<<cnt<<" "<<n<<endl;
   while(1)
   {
     div=n/cnt;
     if(div<11) cnt--;
     else break;
   }
   cout<<cnt<<endl;
}
