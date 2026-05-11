#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,x;
    long long ans=0;
    cin>>n>>m>>x;
    map<int,int> f;
    for(int i=1;i<=n;++i){
        int a;
        cin>>a;
        f[a]++;
    }
    ans=m-f.size();
    for(map<int,int>::iterator it=f.begin();it!=f.end();++it){
    	if(it->second<=x)ans++;
	}
	cout<<ans;
    return 0;
}
/*
熟练map使用
多用STL，而不仅仅是数组
*/ 
