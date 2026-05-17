#include<bits/stdc++.h>
using namespace std;
int q[510][510],sum=0;
int a,b,fa[125000],ans,tot;
pair<int,pair<int,int>>e[125000]; 
int find(int u){ 
    return fa[u]==u?u:fa[u]=find(fa[u]);
}
void kruskal(){
     sort(e+1,e+1+sum); 
     for(int i=1;i<=b;++i) 
         fa[i]=i;
     for(int i=1;i<=sum;++i){
         int x=find(e[i].second.first),y=find(e[i].second.second);
         if(x!=y){
            fa[x]=y;
            ans+=e[i].first;
            if(++tot==b-1) break;
         }
      }
      if(tot==b-1) cout<<ans+a;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>a>>b;
    for(int i=1;i<=b;++i)
    	for(int j=1;j<=b;++j){
    		cin>>q[i][j];
    		if(i>=j)
    		   continue;
    		sum++;
    		if(q[i][j]>a||q[i][j]==0)
    		   q[i][j]=a;//记得建边 
    		e[sum]={q[i][j],{i,j}};
		}
    kruskal();
}
/*
转化为边集 ，然后kruskal 
*/
