#include<bits/stdc++.h>//模板来自董晓算法 
using namespace std;
const int N=1000010;
char b[N]; //b:模式串
int ne[N],l; //前缀函数ne[i]:模式串前缀[1~i]的相等真前缀与真后缀的最大长度
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin>>l>>b+1;
    int lb=strlen(b+1);
    ne[1]=0;
    for(int i=2,j=0;i<=lb;i++){
        while(j&&b[i]!=b[j+1]) j=ne[j]; //失配前跳
        if(b[i]==b[j+1]) j++;             //匹配后移
        ne[i]=j;                          //记录ne[i]
    } 
	cout<<l-ne[l];
    return 0;
}
/*
核心结论： 3月23日晚自习
在一个由子串组成的重复串里（abcabc或者cabcabca），
最小重复子串的长度就是字符串长度减去最长公共前后缀长度。
尝试证明：
如果字符串本身循环，如abcabcabc，
最长公共前后缀相当于将abcabc往后移，
即
abcabcabc 
   abcabcabc 
   易得n-next[n]为最小重复子串长度。
如果本身不重复， 如abcabca，多余的字母一定会同数量增加到next[n]上，结论同理。 
*/
