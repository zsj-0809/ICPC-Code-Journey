#include<bits/stdc++.h>// 拓扑排序 Kahn算法 O(V+E)
using namespace std;//模板来自董晓算法 
const int N=110;
int n,rd[N];
vector<int> e[N],tp;
bool topo(){
     queue<int> q;
     for(int i=1;i<=n;i++) if(!rd[i]) q.push(i); //入度为0的点均入队
     while(q.size()){
           int u=q.front(); 
	       q.pop(); //出队
           tp.push_back(u); //记录拓扑序
           for(auto v:e[u]){
		       if(--rd[v]==0) 
			   q.push(v); 
		   }//入队
     }
     return tp.size()==n;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin>>n;
    for(int i=1,j;i<=n;i++){
        while(cin>>j,j){
              e[i].push_back(j);
              rd[j]++; //入度
        }
    }
    topo();
    for(int i=0;i<n;i++)
	    cout<<tp[i]<<" ";
}
//图论，启动！
