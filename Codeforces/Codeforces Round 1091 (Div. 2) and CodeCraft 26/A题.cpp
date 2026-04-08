#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,ans=0;
        cin>>n>>k;
        for(int i=1;i<=n;++i){
            int x;
            cin>>x;
            ans+=x;
        }
        if(ans%2==1||k*n%2==0)
        cout<<"YES";
        else cout<<"NO";
        cout<<'\n';
    }
    return 0;
}
/*
Shaunak先手，如果数字总和为奇数，直接拿，无需作弊，一定能赢。
如果数字总和为偶数，一开始就可以直接作弊，作弊之后如果总和为偶数，因为此时Yash先手，相当于数字总和为奇数，依然能赢。
如果两者都不满足，那么作弊也赢不了，只能输。
*/
