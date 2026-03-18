#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n;
		if(n==2){
			int a,b;
			cin>>a>>b;
			if(a>b)cout<<"NO";
			else cout<<"YES";
		}
		else if(n==3){
			int a,b,c;
			cin>>a>>b>>c;
			if(b==2)cout<<"YES";
			else cout<<"NO";
		}
		else{
			for(int i=1;i<=n;i++)
			cin>>s;
			cout<<"YES";
		}
		cout<<'\n';
	}
}
