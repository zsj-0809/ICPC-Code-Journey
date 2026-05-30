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
       vector<int> a(n+9,0);
       for(int i=1;i<=n;++i)
           cin>>a[i];
       sort(a.begin()+1,a.begin()+n+1);
       for(int i=1,j=n;i<j;++i,--j)
           if(a[i]!=a[j])
              ++ans;
           else break;
       cout<<ans<<'\n';
	}
    return 0;
}
/*
双指针加贪心
无需证明即可感觉是对的 
*/
