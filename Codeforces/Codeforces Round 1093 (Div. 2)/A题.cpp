#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+9,0);
        for(int i=1;i<=n;++i)
            cin>>a[i];
        if(n==1)cout<<1;
        else{
            sort(a.begin()+1,a.begin()+n+1);
            for(int i=2;i<=n;++i){
                if(a[i]==a[i-1]){
                   cout<<"-1";
                   break;
                }
                if(i==n){
                   for(int j=n;j>=1;--j){
                       cout<<a[j]<<" ";
                   }
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}
/*
如果有重复元素，一定错误。
其他情况将元素降序排列即可。
注意n=1的边界处理。
*/
