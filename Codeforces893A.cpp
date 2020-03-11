#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*int p1=1,p2=2,p3=3;
	int t;
	cin>>t;
	int n;
	int flag=0;
	while(t--)
	{
		cin>>n;
		if(n==p1) swap(p2,p3);
		else if(n==p2) swap(p1,p3);
		else
		{
			//cout<<"NO"<<endl;
			flag=1;
		}
	}
	if(flag) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;*/
		int spec=3;
	    int n;
	    int t,i,j;
	    cin>>t;
	    int flag=1;
	    while(t--)
		{
			cin>>n;
			if(n==spec) flag=0;
			else spec=6-spec-n;
		//	cout<<spec<<endl;
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
}
