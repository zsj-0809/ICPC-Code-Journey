#include<bits/stdc++.h>// Floyd 算法 O(n^3)
using namespace std;//模板来自董晓算法 
int n,m,a,b,c,d[110][110];
void floyd(){// Floyd-Warshall 算法：计算所有点对之间的最短路径
     for(int k=1;k<=n;++k)
         for(int i=1;i<=n;++i)if(d[i][k]<0x3f3f3f3f/2)//松弛操作:尝试通过k点更新 i->j的最短路径
             for(int j=1;j<=n;++j)
                 d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
    memset(d,0x3f,sizeof d);//将邻接矩阵初始化为无穷大（0x3f3f3f3f表示很大的数）
    for(int i=1;i<=n;++i) 
	    d[i][i]=0;
    for(int i=1;i<=m;++i){
        cin>>a>>b>>c;
        d[a][b]=d[b][a]=min(d[a][b],c); //处理重边
    }
    floyd();
    for(int i=1;i<=n;++i){
    	for(int j=1;j<=n;++j){
    		cout<<d[i][j]<<" ";
		}
		cout<<'\n';
    }
    return 0;
}
/*
Floyd算法是一种基于动态规划
通过三重循环枚举中转点来松弛所有点对间最短路径的全源最短路算法，
适用于顶点数较少的图，可以处理负权边但不能有负权环。
*/
