#include<bits/stdc++.h>//线段树O(mlogn)数组版 
using namespace std;//模板来自董晓算法
#define int long long
#define N 100005
int n,m,w[N],op,x,y,k;
struct SGT{//线段树
       #define lc (u<<1)
       #define rc (u<<1|1)
       #define mid (l+r>>1)
       int sum[N*4],add[N*4]; //区间和,懒标记
       void pushup(int u){
            sum[u]=sum[lc]+sum[rc];
       }
       void pushdown(int u,int l,int r,int m){
            if(add[u]){
              sum[lc]+=add[u]*(m-l+1);
              sum[rc]+=add[u]*(r-m);
              add[lc]+=add[u];
              add[rc]+=add[u];
              add[u]=0;
            }
       }
       void build(int u=1,int l=1,int r=n){//建树 
            if(l==r){
               sum[u]=w[l];
               return;
            }
            build(lc,l,mid); 
            build(rc,mid+1,r);
            pushup(u);
        }
        void upd(int x,int y,int k,int u=1,int l=1,int r=n){ //区修
             if(x>r||y<l) return; //越界
             if(x<=l&&r<=y){      //覆盖即返回
                sum[u]+=(r-l+1)*k;
                add[u]+=k;
                return;
             }
             pushdown(u,l,r,mid);    
             upd(x,y,k,lc,l,mid); //裂开
             upd(x,y,k,rc,mid+1,r);
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
       for(int i=1;i<=n;++i) 
           cin>>w[i];
       S.build();
       while(m--){
             cin>>op>>x>>y;
             if(op==1){
                cin>>k;
                S.upd(x,y,k);//将区间每个数加上k 
             }
             else cout<<S.ask(x,y)<<'\n';//区间求和 
       }
}
