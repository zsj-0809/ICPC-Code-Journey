#include<bits/stdc++.h>
using namespace std;
long long f[200005],n,k,sum=0;
long long ksm(long long a,long long b,long long p){
    int res=1;
    a%=p;
    while(b){
        if(b&1)res=res*a%p;
        a=a*a%p;
        b>>=1;
    }
    return res;
}
int find(int x){
	if(f[x]==x)return x;
	return f[x]=find(f[x]);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	for(int i=1;i<=5000;i++)
	f[i]=i;
    cin>>n>>k;
    for(int i=1;i<=n;++i)
    f[i]=i;
    for(int i=1;i<=k;++i){
        int u,v;
    	cin>>u>>v;
        int u1=find(u),v1=find(v);
        if(u1!=v1)
        f[u1]=v1;
	}
    for(int i=1;i<=n;++i){
        if(i==find(i))
           sum++;
    }
    cout<<ksm(26,sum,998244353);
    return 0;
}
/*
初看以为和组合数学有关，实则因为可重复，直接乘方即可。
想了很久才想到用并查集。
相同的取值算作一种情况即可。
统计总情况之后快速幂。
熟悉并查集写法。
*/
