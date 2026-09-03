#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,sum=0;
    cin>>n;
    vector<int> a(n+9,0);
    for(int i=1;i<=n;++i)
        cin>>a[i];
    for(int i=n/2+1;i<=n;++i)
        sum+=a[i];
    cout<<sum;
    return 0;
}
