#include <bits/stdc++.h>
using namespace std;
vector<int> a(100900,0),s(100900,0),step(100900,0);
void dfs(int q,int num){
	step[num]=q;//采用数组记录 
	if(s[q]==0){
		dfs(a[q],num+1);
	}
	else{
		for(int i=1;i<num;i++){
			s[step[i]]=num-i+s[q];	//一次性记录 
		}
		return;
    }
}//可以考虑不使用数组，一边dfs，一边输出。为什么不对？ 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,ma=-1;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        if(a[i]==-1)
        s[i]=1;
	}
	for(int i=1;i<=n;++i){
		if(s[i]==0)//如果还没标记过就进行DFS 
		dfs(i,1);
	}
	for(int i=1;i<=n;i++){
		if(s[i]>ma)ma=s[i];
	} 
	cout<<ma<<'\n';
	for(int i=1;i<=n;++i){
		if(s[i]==ma)cout<<i<<" ";
    }
	return 0; 
}
