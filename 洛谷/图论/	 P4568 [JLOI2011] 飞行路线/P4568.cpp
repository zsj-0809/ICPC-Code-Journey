#include<bits/stdc++.h>//分层图最短路 分层建图 Dijkstra 算法 O(mk*log(nk))
using namespace std;
const int N=10005*11,M=50005*42;
int h[N],to[M],ne[M],w[M],idx;
void add(int a,int b,int c){
     to[++idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx;
}
int n,m,k,s,t,ans=2e9;
int d[N];
void dijkstra(){
     memset(d,0x3f,sizeof d); 
	 d[s]=0;
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
     q.emplace(0,s);
     while(q.size()){
           auto [dd,u]=q.top(); 
	       q.pop();
           if(dd!=d[u]) 
		      continue; //不是第一次出队就跳过
           for(int i=h[u];i;i=ne[i]){
               int v=to[i];
               if(d[v]>d[u]+w[i]){
                  d[v]=d[u]+w[i];
                  q.emplace(d[v],v);
               }
           }
     }
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin>>n>>m>>k>>s>>t;
    for(int a,b,c;m--;){
        cin>>a>>b>>c;
        add(a,b,c),add(b,a,c); //0层双向边
        for(int i=1;i<=k;++i){
            add(a+i*n,b+i*n,c),add(b+i*n,a+i*n,c); //层内双向边
            add(a+(i-1)*n,b+i*n,0),add(b+(i-1)*n,a+i*n,0); //层间单向边
        }
    }
    dijkstra();
    for(int i=0;i<=k;++i) 
	    ans=min(ans,d[t+i*n]); //没走完k+1层，可能已经最小
    cout<<ans;
}
/*
把原图复制 K+1层，层间用零权边（或特殊边）连接，代表使用一次机会进入下一层。 
把特殊操作次数这个动态信息，
转化为图的层数这一静态结构，
从而让普通最短路算法能自动处理最优策略
*/
