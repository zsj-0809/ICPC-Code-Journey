#include<bits/stdc++.h>//Kruskal算法 O(mlogm)
using namespace std;//模板来自董晓算法
const int N=200010;
int n,m,fa[N],ans,tot;
pair<int,pair<int,int>>e[N]; //边集
int find(int u){//并查集的找根
    return fa[u]==u?u:fa[u]=find(fa[u]);
}
void kruskal(){
     sort(e+1,e+1+m); //排序
     for(int i=1;i<=n;++i) 
         fa[i]=i;
     for(int i=1;i<=m;++i){
         int x=find(e[i].second.first),y=find(e[i].second.second);
         if(x!=y){
            fa[x]=y;
            ans+=e[i].first;
            if(++tot==n-1) break;
         }
      }
      if(tot==n-1) cout<<ans;
      else cout<<"orz";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=1,u,v,w;i<=m;++i){
        cin>>u>>v>>w;
        e[i]={w,{u,v}};
    }
    kruskal();
}
/*
注意边集的使用
Kruskal算法：将边按权值从小到大排序，
用并查集依次加入不形成环的边，直至所有顶点连通，得到最小生成树。 
*/
