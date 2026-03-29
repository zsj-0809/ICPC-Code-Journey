#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n,sum=1,pos=1;
		cin>>n;
		vector<int> a(n+9,0);
		for(int i=1;i<=n;++i)
		cin>>a[i];
		sort(a.begin()+1,a.begin()+n+1);
		for(int i=2;i<=n;++i){
			if(a[i]-a[pos]>=sum){
				sum++;
				pos=i;
			}
		}
		cout<<sum<<'\n';	
	}
    return 0;
}
/*
直接贪心即可，无需动态规划 
*/ 
