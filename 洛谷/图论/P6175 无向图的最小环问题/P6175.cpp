#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,m,a,b,c,ans=1e8;
int w[N][N],d[N][N];
void Floyd(){
     for(int k=1;k<=n;++k){
         for(int i=1;i<k;++i)
             for(int j=i+1;j<k;++j)
                 ans=min(ans,d[i][j]+w[j][k]+w[k][i]); //更新最小环
         for(int i=1;i<=n;++i)
             for(int j=1;j<=n;++j)
                 d[i][j]=min(d[i][j],d[i][k]+d[k][j]); //更新最短路
     }  
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin>>n>>m;
    for(int i=1;i<=n;++i)
	    for(int j=1;j<=n;++j)
		    if(i!=j) w[i][j]=1e8;
    for(int i=1;i<=m;++i){
        cin>>a>>b>>c;
        w[a][b]=w[b][a]=c;
    }
    memcpy(d,w,sizeof w);
    Floyd();
    if(ans==1e8) cout<<"No solution.";
    else cout<<ans;
}
/*
在Floyd算法枚举k的时候，已经得到了前 k-1 个点的最短路径
这k-1个点不包括点k,并且他们的最短路径中也不包括k点
最小环的求法与Floyd特点的结合，十分巧妙自然 
*/
