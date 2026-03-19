#include<bits/stdc++.h>//模板来自董晓算法 
using namespace std;
const int N=1000010;
char a[N],b[N]; //a:文本串 b:模式串
int ne[N]; //前缀函数ne[i]:模式串前缀[1~i]的相等真前缀与真后缀的最大长度
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin>>a+1>>b+1;
    int la=strlen(a+1),lb=strlen(b+1);
    ne[1]=0;
    for(int i=2,j=0;i<=lb;i++){
        while(j&&b[i]!=b[j+1]) j=ne[j]; //失配前跳
        if(b[i]==b[j+1]) j++;             //匹配后移
        ne[i]=j;                          //记录ne[i]
    }
    for(int i=1,j=0;i<=la;i++){
        while(j&&a[i]!=b[j+1]) j=ne[j]; //失配前跳
        if(a[i]==b[j+1]) j++;             //匹配后移
        if(j==lb) cout<<i-lb+1<<'\n'; //全配记录
    }
    for(int i=1;i<=lb;i++) 
	cout<<ne[i]<<" ";
    return 0;
}
