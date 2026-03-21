#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<=7||n==9||n==11){
			cout<<"yukari";
		}
		else cout<<"kou";
		cout<<'\n';
	} 
	return 0;	
}
/*
寻找必胜点，推理
自己再做一遍
*/
