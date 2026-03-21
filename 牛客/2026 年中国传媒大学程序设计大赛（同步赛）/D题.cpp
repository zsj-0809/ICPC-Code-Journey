#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m,s0=0,q0=0;
	string a;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		for(int j=0;j<a.size();++j){
			if(a[j]=='0')s0++;
		}
	}
	for(int i=1;i<=n;i++){//注意内外层 变量不同 
		cin>>a;
		for(int j=0;j<a.size();j++){
			if(a[j]=='0')q0++;
		}
	}
	if(abs(s0-q0)%2==0)cout<<0;
	else cout<<1;
}
/*
注意，当两者相同数字时都会消去
同时思考：为什么一定可行？为什么只要数字相同两者一定可以转换？
*/
