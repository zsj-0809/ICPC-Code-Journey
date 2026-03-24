#include<bits/stdc++.h>//模板来自董晓算法 
using namespace std;
const int N=3e6+5;
int T,n,q;
int ch[N][65],cnt[N],idx; //ch[p][i]:点边数组,对应多叉树
int getnum(char c){
    if(c>='A'&&c<='Z') return c-'A'; //0~25
    else if(c>='a'&&c<='z') return c-'a'+26; //26~51
    else return c-'0'+52; //52~61
}
void insert(string s){
     int p=0;
     for(auto c:s){
         int i=getnum(c);
         if(!ch[p][i]) ch[p][i]=++idx; //从p点走边i到达新点的编号
         p=ch[p][i]; //走到子节点
         cnt[p]++;   //p点之前的前缀的插入次数
     }
}
int query(string s){
    int p=0;
    for(auto c:s){
        int i=getnum(c);
        if(!ch[p][i]) return 0;//查询不到，返回0 
        p=ch[p][i];
    }
    return cnt[p];
}
int main(){
    ios::sync_with_stdio(false);
	  cin.tie(nullptr);
    cin>>T;
    while(T--){
          cin>>n>>q;
		  string s;
          for(int i=1;i<=n;i++) 
		  cin>>s,insert(s);
          for(int i=1;i<=q;i++) 
		  cin>>s,cout<<query(s)<<"\n";
          for(int i=0;i<=idx;i++)
          for(int j=0;j<65;j++) ch[i][j]=0;
          for(int i=0;i<=idx;i++) cnt[i]=0;  
          idx=0;
    }
    return 0;
}
//什么时候才可以去icpc邀请赛？
