#include<bits/stdc++.h>//模板来自董晓算法 
using namespace std;
const int N=3e6+5;
int n,q;
int ch[N][65],cnt[N],idx,en[N]; //ch[p][i]:点边数组,对应多叉树
vector<int> times(N,0);
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
     en[p]++;
}
int query(string s){
    int p=0;
    for(auto c:s){
        int i=getnum(c);
        if(!ch[p][i]) return 0;//不能直接改成回复值 
        p=ch[p][i];
    }
    if(en[p]==0)return 0;
    times[p]++;
    if(times[p]==1)
    return 1;
    else
    return 2; 
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin>>n;
	string s;
    for(int i=1;i<=n;i++) 
        cin>>s,insert(s);
        cin>>q; 
    for(int i=1;i<=q;i++){
    	cin>>s;
    	int excited=query(s);//先保存结果，否则每次调用导致 times[p] 被多次增加 
    	if(excited==0)
    	cout<<"WRONG";
    	else if(excited==1)
	    cout<<"OK";
	    else cout<<"REPEAT";
	    cout<<'\n';
	}
    return 0;
}
/*
区分单词结束的标记和前缀标记 
单词结束：每个单词标记一次
前缀标记：每个字母标记一次 
无聊的心理课，公式化的演讲
*/
