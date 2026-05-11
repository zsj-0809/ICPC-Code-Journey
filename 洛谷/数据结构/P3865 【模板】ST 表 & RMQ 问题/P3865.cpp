#include<bits/stdc++.h>// ST表 RMQ O(nlogn)
using namespace std;//模板来自董晓算法 
const int N=1e5+5;
int n,m;
int f[N][22]; //f[i][j]表示起点为i,长度为2^j的区间最大值
int lg[N];    //lg[x]表示区间长度的对数
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;//长度为 N 的数列，和 M 次询问
    for(int i=1;i<=n;++i)
	    cin>>f[i][0];
    for(int i=2;i<=n;++i) 
	    lg[i]=lg[i>>1]+1;
	for(int j=1;j<=lg[n];++j)//枚举区间长度的对数
	    for(int i=1;i<=n-(1<<j)+1;++i)//枚举区间起点为 i。终点为 i+2^j-1
	        f[i][j]=max(f[i][j-1],f[i+(1<<(j-1))][j-1]);//后半区起点为 i+2^(j-1)。[2,5]=[2,3]+[4,5]
    for(int i=1;i<=m;++i){
        int l,r,j; 
		cin>>l>>r;
        j=lg[r-l+1]; //区间长度的对数
        cout<<max(f[l][j],f[r-(1<<j)+1][j])<<'\n'; //后段起点为 r-2^j+1。[1,6]~[1,4]+[3,6]
     }
    return 0; 
}
/*
ST表（Sparse Table），用于解决静态区间最大值查询（RMQ） 问题。 
它可以在O(nlogn)时间内预处理,之后O(1)回答任意区间的最值。
ST表不支持修改（静态），适合数据不变、查询次数多的场景。
用两个可重叠的、长度为 2 的幂的区间，来覆盖任意长度的区间，从而用 O(1) 时间得到最值。
*/
