#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
      int n,ans=0;
      cin>>n;
      vector<long long> a(n+9,0);
      for(int i=1;i<=n;++i)
      	  cin>>a[i];
	  for(int i=n-1;i>=1;--i)
	  	  if(a[i+1]>0)
			 a[i]+=a[i+1];
	  for(int i=1;i<=n;++i)
	  	  if(a[i]>0)
	  	     ans++;
	  cout<<ans<<'\n';
    }
    return 0;
}
/*
非常显而易见的贪心 
*/ 
