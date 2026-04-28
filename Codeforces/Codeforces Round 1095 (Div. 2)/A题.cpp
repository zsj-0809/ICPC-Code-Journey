#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
       int n,flag=0,ans=0;
       cin>>n;
       vector<int> a(n+9,0);
       for(int i=1;i<=n;++i)
       	   cin>>a[i];
       for(int i=1;i<=n;++i){
       	   if(a[i]!=1)
       	      ans+=a[i];
	   }
	   for(int i=n;i>=1;--i){
	   	   if(a[i]==1)flag++;
	   	   else break;
	   }
	   if(flag>0)ans++;
	   cout<<ans<<'\n';
	}
    return 0;
}
/*
显然任何两个大于1的数字相乘，都会大于它们相加 。
如果末尾有1，无法被消去，只能单独统计。
*/ 
