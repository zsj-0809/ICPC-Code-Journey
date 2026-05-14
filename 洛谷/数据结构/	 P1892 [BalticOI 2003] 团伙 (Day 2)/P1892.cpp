#include<bits/stdc++.h>//扩展域并查集 
using namespace std;//模板来自董晓算法 
int n,m,ans,fa[2005];
int find(int x){
    return fa[x]==x?x:fa[x]=find(fa[x]);
}
void unite(int x,int y){
     fa[find(y)]=find(x);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin>>n>>m;
    for(int i=1;i<=2*n;++i) 
	    fa[i]=i;
    for(int i=1,a,b;i<=m;++i){
        char ch; 
	    cin>>ch>>a>>b;
        if(ch=='F') 
	       unite(a,b); //若是朋友，合并a与b
        else{ //若是敌人，合并a与b的敌人，合并b与a的敌人
           unite(a,b+n); 
		   unite(b,a+n);
        }
    }
    for(int i=1;i<=n;++i)
        if(i==fa[i])
	       ans++;
    cout<<ans;
}
/*
种类并查集：维护点的连通性和传递性
扩展成两个域：朋友域（1~n）和敌人域（n+1~2n）
若是朋友，合并a与b
若是敌人，合并a与b的敌人，合并b与a的敌人
统计根的个数即答案
*/
