#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k,v,ans=0;
    cin>>n>>m>>k;
    vector<int> a(m+9,0);
    for(int i=1;i<=n;++i){
    	int x;
	    cin>>x;
	    a[x]++;
	}
	cin>>v;
	for(int i=1;i<=k;++i){
		int u;
		cin>>u;
		a[u]=0;
	}
	for(int i=1;i<=m;++i){
		ans+=a[i];
	}
	cout<<ans;
    return 0;
}
