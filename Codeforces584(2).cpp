#include <iostream>
#include<string>
using namespace std;

int main() {
	int n,d;
	string s;
	cin>>n>>d;
	if(d==10&&n<2)cout<<"-1";
	else if(d==10&&n>=2){
		for(int i=0;i<n-1;i++){
			s+=1+'0';
		}
		s+=0+'0';
		cout<<s;
	}
	else{
	for(int i=0;i<n;i++){
		s+= d+'0';
	}
	cout<<s;}
	return 0;
}
