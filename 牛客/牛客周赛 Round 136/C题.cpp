#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,ji,ou,tj=0,to=0;
	long long ans=1;
	string s;
	cin>>n>>s;
	if(n%2==0){
		ji=n/2;
		ou=ji;
	}
	else{
		ou=n/2;
		ji=ou+1;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='j'){
			tj++;
		}
		else if(s[i]=='o')
			 to++;
	}
	if(tj>ji||to>ou){
		cout<<0;
	}
	else{
		for(int i=1;i<=tj;i++){
			ans*=ji;
			ans%=998244353;
			ji--;
		}
		for(int i=1;i<=to;++i){
			ans*=ou;
			ans%=998244353;
			ou--;
		}
		for(int i=ji+ou;i>=1;i--){
			ans*=i;
			ans%=998244353;
		}
		cout<<ans;
	}
    return 0;
}//分类即可，简单的排列组合问题
