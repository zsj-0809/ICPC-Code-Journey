#include<bits/stdc++.h>
using namespace std;
#define int long long           
const int N=100005;         
int n,m,w[N],op,x,y;     
struct SGT{                     
    #define lc (u<<1)          // 左儿子编号 2*u
    #define rc (u<<1|1)      // 右儿子编号 2*u+1
    #define mid ((l+r)>>1)   
    int mn[N*4];          
    void pushup(int u){
        mn[u]=min(mn[lc],mn[rc]);
    }
    void build(int u=1,int l=1,int r=n){    
         if(l==r){                    // 叶子节点
            mn[u]=w[l];
            return;
         }
         build(lc,l,mid);               // 递归建左子树
         build(rc,mid+1,r);           // 递归建右子树
         pushup(u);                       // 由叶子向上更新
    }
    int query(int x,int y,int u=1,int l=1,int r=n){
        if(x>r||y<l) return 100001; 
        if(x<=l&&r<=y) return mn[u]; 
        return min(query(x,y,lc,l,mid),query(x,y,rc,mid+1,r));
    }
}S;
signed main(){
    ios::sync_with_stdio(false);       
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=1;i<=n;++i) 
	    cin>>w[i];
    S.build();                          
    while(m--){
        cin>>x>>y;
		cout<<S.query(x,y)<<" "; 
    }
    return 0;
}
