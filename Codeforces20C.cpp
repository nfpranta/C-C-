#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define RESET(a, b) memset(a, b, sizeof(a))
#define dis first
#define node second
#define pb push_back
#define pii pair<int,int>
const int mx = 100005;
const int inf =  0x3f3f3f3f;
int x[mx+2];
vector <pii> adj[mx];
int dis[mx];
void dijkastra(int start)
{
    priority_queue<pii,vector<pii>,greater<pii>>q;
    RESET(dis,inf);
    RESET(x,-1);
    q.push(pii(0,start));
    dis[start]=0;
    x[start]=inf;
    while(!q.empty())
    {
        int n=q.top().node;
        int d=q.top().dis;
        q.pop();
        if(d>dis[n]) continue;
        for(int i=0;i<adj[n].size();i++)
        {
            int a=adj[n][i].node;
            int b=adj[n][i].dis;
            if(d+b<dis[a])
            {
                dis[a]=d+b;
                 x[a]=n;
                q.push(pii(dis[a],a));
            }
        }
    }
}
void printpath(int start,int end)
{
    if(start==end) cout<<start<<" ";
    else if(x[end]==-1) cout<<"-1";
    else {
        printpath(start,x[end]);
        cout<<end<<" ";
    }
}
main()
{
    int node,edge,i,j,e1,e2,cost;
    cin>>node>>edge;
    for(i=0;i<edge;i++)
    {
        cin>>e1>>e2>>cost;
        adj[e1].pb(pii(cost,e2));
        adj[e2].pb(pii(cost,e1));
    }
    dijkastra(1);
    printpath(1,node);
    cout<<endl;
}
