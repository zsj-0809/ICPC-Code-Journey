#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,a[12],flag=0;
        cin>>n;
        for(int i=1;i<=n;++i)
        cin>>a[i];
        for(int i=2;i<=n;i++){
            if(a[i]<a[i-1]){
                flag=1;
                break;
            }
        }
        if(flag==0)cout<<n;
        else cout<<1;
        cout<<'\n';
    }
    return 0;
}
/*
贪心题。易得出结论如果一开始不是递增的，则一定可以被删除到1。
*/
