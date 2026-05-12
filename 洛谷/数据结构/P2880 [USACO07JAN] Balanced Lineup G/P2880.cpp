#include<bits/stdc++.h>
using namespace std;
const int N=50004;
int n,q;
int f[N][22],g[N][22]; //f[i][j]表示起点为i,长度为2^j的区间最大值
int lg[N];    //lg[x]表示区间长度的对数
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>q;
    for(int i=1;i<=n;++i){
    	cin>>f[i][0];
    	g[i][0]=f[i][0];
	}
    for(int i=2;i<=n;++i) 
	    lg[i]=lg[i>>1]+1;
	for(int j=1;j<=lg[n];++j)
	    for(int i=1;i<=n-(1<<j)+1;++i){
	    	f[i][j]=max(f[i][j-1],f[i+(1<<(j-1))][j-1]);
	    	g[i][j]=min(g[i][j-1],g[i+(1<<(j-1))][j-1]);
	    }
    for(int i=1;i<=q;++i){
    	int l,r,k;
    	cin>>l>>r;
    	k=lg[r-l+1];
    	cout<<max(f[l][k],f[r-(1<<k)+1][k])-min(g[l][k],g[r-(1<<k)+1][k])<<'\n';
    }
    return 0; 
}
/*
ST表模板题
*/
