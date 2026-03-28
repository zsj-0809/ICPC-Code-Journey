#include<bits/stdc++.h>
using namespace std; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m,x,y;
	cin>>n>>m;
	vector<int> a(n+9,0),b(n+9,0);
	for(int i=1;i<=n;++i){
		cin>>x>>y;
		a[x]++;
		b[y]++;	
	}
	for(int i=1;i<=m;++i)
	cout<<b[i]-a[i]<<'\n';
    return 0;
}	
