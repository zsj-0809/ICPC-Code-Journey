#include<bits/stdc++.h>//堆优化 Dijkstra O(mlogn) 
using namespace std;//模板来自董晓算法 
const int N=100010;
vector<pair<int,int>> e[N];
int n,m,s,d[N],vis[N];
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
    cin>>n>>m>>s;
    for(int i=0,a,b,c;i<m;i++){
        cin>>a>>b>>c;
        e[a].push_back({b,c});
    }
    dijkstra();
    for(int i=1;i<=n;i++) 
    cout<<d[i]<<" ";
}
