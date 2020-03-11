#include<bits/stdc++.h>
using namespace std;
int cnt[28];
int main()
{
	int n,i,s,j;
	int even=0,odd=0;
	string x;
	cin>>x;
	for(i=0;i<x.length();i++)
	{
		cnt[x[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(cnt==0) continue;
		if(cnt[i] & 1) odd++;
		else if(!(cnt[i] &1)) even++;
	}
	if(odd%2==0 and odd>0) cout<<"Second"<<endl;
	else  cout<<"First"<<endl;
}
