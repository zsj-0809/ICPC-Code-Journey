#include<bits/stdc++.h>
using namespace std;
int n,a,m,l,r,sum=0,pre[1000090];
int main(){
    ios::sync_with_stdio();
	cin.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++){
	    cin>>a;
        sum+=a;
        pre[i]=sum;
    }
    cin>>m;
    for(int i=1;i<=m;i++){
	    cin>>l>>r;	
	    cout<<pre[r]-pre[l-1]<<'\n'; 
	}
	return 0;
}
/*
前缀和，非常简单又便利的算法思想。
*/


