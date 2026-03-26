#include<bits/stdc++.h>//朴素 Dijkstra O(n^2)
using namespace std;//模板来自董晓算法 
const int N=100010,inf=(1<<31)-1;
int n,m,s,a,b,c;
vector<pair<int,int>> e[N];
int d[N],vis[N];
void dijkstra(){
     for(int i=0;i<=n;i++) 
	     d[i]=inf; 
	     d[s]=0;
     for(int i=1;i<n;i++){//枚举次数
         int u=0;
         for(int j=1;j<=n;j++)//枚举点
         if(!vis[j]&&d[j]<d[u]) 
		     u=j;
         vis[u]=1;//选u
     for(auto &edge:e[u]){//枚举邻点
	     int v=edge.first;
	  	 int w=edge.second; 
	     if(d[v]>d[u]+w) //松弛
            d[v]=d[u]+w;
		}
     }
}
int main(){
  	ios::sync_with_stdio(false);
  	cin.tie(nullptr); 
    cin>>n>>m>>s;
    for(int i=0;i<m;++i){
        cin>>a>>b>>c;
        e[a].push_back({b,c});
    }
    dijkstra();
    for(int i=1;i<=n;++i)  
	    cout<<d[i]<<" ";
}
/*
仅能用于非负权图
*/ 
