#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a[10],sum=0;
        for(int i=1;i<=7;++i)
        cin>>a[i];
        sort(a+1,a+8);
        for(int i=1;i<=6;++i){
            a[i]=-a[i];
            sum+=a[i];
        }
        cout<<sum+a[7]<<'\n';
    }
    return 0;
}
