#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
int main()
{
    int hh,mm,i,j;
    double H,D,C,N;
    cin>>hh>>mm;
    cin>>H>>D>>C>>N;
    double mn1=ceil(H/N)*C;
    double minu=hh*60+mm;
    double minu2=20*60-minu;
    if(minu2<0) minu2=0;
    double mn2=ceil((H+minu2*D)/N)*C;
    mn2=mn2-((mn2*20)/100);
    double ans=min(mn1,mn2);
   // cout<<mn1<<" "<<mn2<<endl;
    cout<<fixed<<setprecision(5)<<ans<<endl;
}
