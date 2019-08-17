#include<bits/stdc++.h>
using namespace std;

//Datatypes
#define ll                      long long
#define ULL                     unsigned long long
#define LD                      long double
#define UI                      unsigned int
#define US                      unsigned short

//Commands and Functions
#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define SQR(a)                  ((a)*(a))
#define fRead(x)                freopen(x,"r",stdin)
#define fWrite(x)               freopen (x,"w",stdout)
#define getarray(a,n)           for(int i=0;i<n;i++) cin>>a[i]
#define pb                      push_back
#define mk                      make_pair
#define ff                      first
#define ss                      second
#define lb                      lower_bound
#define ub                      upper_bound
#define tcase                   cout<<"Case "<<C++<<": ";
#define all(a)                  a.begin(),a.end()
#define lla(A)                  A.rbegin(), A.rend()
#define Unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end
#define lastEle(v)              v[v.size()-1]
#define ABS(x)                  ((x)<0?-(x):(x))
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define MEM(a,x)                memset(a,x,sizeof(a))
#define Godspeed                ios_base::sync_with_stdio(0);cin.tie(NULL);
#define FOR(i,a,b)              for(int i=a;i<=b;i++)
#define ROF(i,a,b)              for(int i=a;i>=b;i--)
#define REP(i,b)                for(int i=0;i<b;i++)
#define PER(i,a,b)              for(int i=a;i>b;i--)
#define FOREACH(i,t)            for (typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define PRESENT(c,x)            ((c).find(x) != (c).end())
#define CPRESENT(c,x)           (find(ALL(c),x) != (c).end())
#define Bye                     return 0
#define SORT(v)                 sort(v.begin(),v.end())
#define REV(v)                  reverse(v.begin(),v.end())
#define EVEN(x)                 return x&1==0?1:0
#define ODD(x)                  return x&1==0?0:1
#define Debug                   cout<<endl<<"I AM BATMAN"<<endl;
//ll powmod(ll a,ll b)           {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
int PowMod(int a,int l, int md)
{
    int res=1;
    while(l)
    {
        if(l&1)
            res=res*a%md;
        l/=2;
        a=a*a%md;
    }
    return res;
}

//Constants
const int MOD = 1000000007; // 998244353
const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;
#define PI                      acos(-1.0)
//Data Structures
#define pii pair<int,int>
#define pll pair<long long,long long>
#define pdd pair<double,double>
#define pldld pair<long long double, long long double>
ll multiples[]= {0,10,100,1000,100000,1000000,10000000,100000000,1000000000,10000000000,100000000000,1000000000000,10000000000000,1000000000000000};
int a[1000001];
int b[10][6000];
int checker(int x);
int main()
{
    int n,i,j,k,cnt1=0,cnt2=0,cnt3=0;
    cin>>n;
   REP(i,n){

 cin>>a[i] ;
  }
  REP(i,n)
  {
      if(a[i]==1) {
            cnt1++;
            b[1][cnt1]=i+1;
      }
      else if(a[i]==2) {
            cnt2++;
      b[2][cnt2]=i+1;
      }
      else {
            cnt3++;
      b[3][cnt3]=i+1;
  }
  }
  if(cnt1==0|| cnt2==0 || cnt3==0){
    cout<<0<<endl;
    return 0;
  }
  bool flag1=1,flag2=1,flag3=1;
  int l=min3(cnt1,cnt2,cnt3);
  cout<<min3(cnt1,cnt2,cnt3)<<endl;
  cnt1=1,cnt2=1,cnt3=1;
  for(i=0;i<l;i++){
    for(j=0;j<n;j++){
        if(a[j]==1&& flag1){
            cout<<b[1][cnt1]<<" ";
            cnt1++;
            flag1=0;
        }
        else  if(a[j]==2 && flag2){
            cout<<b[2][cnt2]<<" ";
            cnt2++;
            flag2=0;
        }
         else if(flag3){
            cout<<b[3][cnt3]<<" ";
            cnt3++;
            flag3=0;
        }
    }
    flag1=1,flag2=1,flag3=1;
    cout<<endl;
  }
}

