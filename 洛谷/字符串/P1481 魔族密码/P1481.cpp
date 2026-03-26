#include<bits/stdc++.h>
using namespace std;
const int N=3e6+5;
int n,ma=-1;
int ch[N][65],idx,en[N]; //ch[p][i]:点边数组,对应多叉树
string s[N];
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
     }
     en[p]++;
}
int query(string s){
    int p=0,sum=0;
    for(auto c:s){//遍历每个字母 
        int i=getnum(c);
        p=ch[p][i];
        if(en[p])sum++;//如果包含一个单词就加1 
    }
    return sum;
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++) 
        cin>>s[i],insert(s[i]);
    for(int i=1;i<=n;i++){
    	if(query(s[i])>ma)
    	   ma=query(s[i]);
	}
	cout<<ma;
    return 0;
}
