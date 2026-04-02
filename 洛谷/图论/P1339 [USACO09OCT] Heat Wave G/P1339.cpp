#include<bits/stdc++.h>//堆优化 Dijkstra O(mlogn) 
using namespace std;//模板来自董晓算法 
const int N=100010;
vector<pair<int,int>> e[N];
int n,m,s,t,d[N],vis[N];
void dijkstra(){
     memset(d,0x3f,sizeof d);
	 d[s]=0;
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q; //小根堆
     q.push({0,s});
     while(q.size()){
           auto u=q.top().second;
		   q.pop();
           if(vis[u])continue; 
		   vis[u]=1; //不是第1次出队就跳过，是就标记，然后扩展
           if(u==t)break;
           for(auto& edge:e[u]){
               int v=edge.first;
               int w=edge.second;
               if(d[v]>d[u]+w){
                  d[v]=d[u]+w;
                  q.push({d[v],v});
            }
        }
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin>>n>>m>>s>>t;
    for(int i=0,a,b,c;i<m;i++){
        cin>>a>>b>>c;
        e[a].push_back({b,c});
        e[b].push_back({a,c});//无向图双向建边
    }
    dijkstra();
    cout<<d[t]<<" ";
}
/*
求出两个点之间的最短路，到达终点时直接break即可。
*/
