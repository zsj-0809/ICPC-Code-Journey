#include<bits/stdc++.h>
using namespace std;
int q[310][310],sum;
int n,fa[310],ans,tot;
pair<int,pair<int,int>>e[50000]; //注意数据范围 
int find(int u){ 
    return fa[u]==u?u:fa[u]=find(fa[u]);
}
void kruskal(){
     sort(e+1,e+1+sum); 
     for(int i=0;i<=n;++i) //包括虚拟源点 
         fa[i]=i;
     for(int i=1;i<=sum;++i){
         int x=find(e[i].second.first),y=find(e[i].second.second);
         if(x!=y){
            fa[x]=y;
            ans+=e[i].first;
            if(++tot==n) break;
         }
      }
      cout<<ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;++i){
    	int x;
    	cin>>x;
    	e[++sum]={x,{0,i}};
    }
    for(int i=1;i<=n;++i)
    	for(int j=1;j<=n;++j){
    		cin>>q[i][j];
    		if(i>=j)
    		   continue;
    		e[++sum]={q[i][j],{i,j}};
		}
    kruskal();
}
/*
题目要使得所有村庄都有水，有两种解法：
一是村庄自己打井，二是村庄修路到别的有井的村庄。
思路很简单；让所有村庄相连，选一个费用最小的村庄打井，
代码实现也很简单，就是kruskal再加上打井费用最小值。
然而这种想法只AC了一半。仔细想就会发现很麻烦的一个地方：
必须要考虑打井费用小于修路费用的地方。
但是又不能像题目买礼物一样直接修改费用，
因为可能导致很多村庄相连但是，没有一个村庄有井，统计起来非常麻烦。
这时候有一个非常天才的做法：引入虚拟原点井水，
这个虚拟原点到每个村庄的费用就是打井的费用。
此时只需要对所有村庄和虚拟原点进行一次kruskal就能得到正确答案，真是天才想法！
人类苦心冥想去思考该打井还是该修路，还不如让kruskal自己选出最优的打井和修路的分配方案。
*/
