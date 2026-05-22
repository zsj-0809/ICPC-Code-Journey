#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=n+1;i<=n*2;++i)
		    cout<<i<<" ";
		cout<<'\n';
	}
	return 0;
}
/*
根据元素和不同很容易想到构造方法
东北四省赛加油！
CCPC2026年5月22日夜晚
*/
