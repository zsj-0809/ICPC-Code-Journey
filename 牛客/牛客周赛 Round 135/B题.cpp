#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n,sum=0;
		cin>>n;
		vector<int> s(n+10,0);
		unordered_map<int,int> c;//习惯使用STL
		for(int i=1;i<=n;++i){
		cin>>s[i];
		c[s[i]-i]++;
		sum=max(sum,c[s[i]-i]);
	    }
	    cout<<sum<<'\n';
    }
    return 0;//移项，抓住数学本质解题，恒等式变形 
}
