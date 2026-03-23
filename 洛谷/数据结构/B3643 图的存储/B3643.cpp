#include<bits/stdc++.h>
using namespace std;
int n,m;                     // 顶点数n，边数m
int deg[1005];                // deg[i] 存储顶点i的度数
int G1[1005][1005];           // 邻接矩阵，G1[i][j]=1表示i和j有边
vector<int> G2[1005];         // 邻接表，G2[i]存储与i相邻的所有顶点
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=1;i<=m;i++){   // 循环读入每条边
        int u,v;
        cin>>u>>v;         // 读入一条边的两个端点
        deg[u]++;              // 顶点u的度数加1
        deg[v]++;              // 顶点v的度数加1
        G1[u][v]=G1[v][u]=1;  // 在邻接矩阵中标记边
        G2[u].push_back(v);    // 在邻接表中添加v到u的邻接表
        G2[v].push_back(u);    // 在邻接表中添加u到v的邻接表
    }
    // 输出邻接矩阵
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<G1[i][j]<<" ";  
        }
        cout<<'\n';
    }
    //对每个顶点的邻接表进行排序（题目要求按顶点编号从小到大输出）
    for(int i=1;i<=n;i++) {
        sort(G2[i].begin(),G2[i].end());
    }
    // 输出每个顶点的度数和邻接表
    for(int i=1;i<=n;i++){
        cout<<deg[i]<<" ";          // 先输出度数
        for(int j=0;j<G2[i].size();j++){
            cout<<G2[i][j]<<" ";    // 依次输出邻接顶点
        }
        cout<<'\n';
    }
    return 0;
}
