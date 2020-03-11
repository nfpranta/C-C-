#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k;
	string x;
	cin>>x;
	int idx=-1;
	n=x.length()-1;
	for(i=0;i<=n;i++)
	{
		if((x[i]-'0')%2==0)
		{
			idx=i;
			if(x[n]>x[i]) break;
		}
	}
	if(idx==-1)
	{
		cout<<-1<<endl;
	}
	else
	{
		swap(x[n],x[idx]);
		cout<<x<<endl;
	}
}
