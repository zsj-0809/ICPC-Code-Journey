#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+10; // 适配n最大1e5的规模
vector<int> p[MAXN];       // 邻接表存储图
bool u[MAXN];              // 标记是否访问过
void dfs(int x){
    cout<<x<<" ";      // 输出访问顺序
    //遍历当前节点的所有邻接节点（已排序，保证先访问小数）
    for(int i=0,sz=p[x].size();i<sz;i++){
        if(!u[p[x][i]]){       // 未访问过才处理
            u[p[x][i]]=true;
            dfs(p[x][i]);        // 递归访问参考文献
        }
    }
}
void bfs(int start) {
    queue<int> q;// 初始化：标记起点+入队
    u[start]=true;
    q.push(start);
    while(!q.empty()) {
        int x=q.front();
        q.pop();
        cout<<x<<" ";// 输出访问顺序
        // 遍历当前节点的所有邻接节点（已排序）
        for(int i=0,sz=p[x].size();i<sz;i++){
            if(!u[p[x][i]]){
                u[p[x][i]]=true;
                q.push(p[x][i]);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        p[x].push_back(y);
    }
    // 2. 排序：每个节点的邻接表按升序排列（保证先访问小数）
    for(int i=1;i<=n;i++) {
        sort(p[i].begin(),p[i].end());
    }
    fill(u,u+MAXN,false); // 初始化访问数组
    u[1]=true;            //先标记起点1为已访问
    dfs(1);
    cout<<'\n';
    fill(u,u+MAXN,false); // 重置访问数组
    bfs(1);
    cout<<'\n';
    return 0;
}
