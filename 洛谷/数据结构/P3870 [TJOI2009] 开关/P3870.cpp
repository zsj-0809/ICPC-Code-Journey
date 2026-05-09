#include<bits/stdc++.h>//线段树O(mlogn)数组版 
using namespace std;//模板来自董晓算法
#define int long long
#define N 100005
int n,m,op,x,y;
struct SGT{ //线段树
       #define lc (u<<1)
       #define rc (u<<1|1)
       #define mid (l+r>>1)
       int sum[N*4];
	   bool add[N*4];//区间和,懒标记
       void pushup(int u){
            sum[u]=sum[lc]+sum[rc];
       }
       void pushdown(int u,int l,int r,int m){
            if(add[u]){
              sum[lc]=(m-l+1)-sum[lc];
              sum[rc]=(r-m)-sum[rc];
              add[lc]^=1;
              add[rc]^=1;
              add[u]=0;
            }
       }
       void build(int u=1,int l=1,int r=n){
            if(l==r){
               sum[u]=0;
               return;
            }
            build(lc,l,mid); 
            build(rc,mid+1,r);
            pushup(u);
        }
        void upd(int x,int y,int u=1,int l=1,int r=n){ //区修
             if(x>r||y<l) return; //越界
             if(x<=l&&r<=y){      //覆盖即返回
                sum[u]=(r-l+1)-sum[u];
                add[u]^=1;
                return;
             }
             pushdown(u,l,r,mid);    
             upd(x,y,lc,l,mid); //裂开
             upd(x,y,rc,mid+1,r);
             pushup(u);
        }
        int ask(int x,int y,int u=1,int l=1,int r=n){ //区查
            if(x>r||y<l) return 0;
            if(x<=l&&r<=y) return sum[u];
            pushdown(u,l,r,mid);
            return ask(x,y,lc,l,mid)+ask(x,y,rc,mid+1,r);
        }
}S;
signed main(){
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       cin>>n>>m;
       S.build();
       while(m--){
         cin>>op>>x>>y;
         if(op==0)   
            S.upd(x,y);
         else cout<<S.ask(x,y)<<'\n';
       }
}
/*
仔细品味懒标记和pushdown的修改
*/
