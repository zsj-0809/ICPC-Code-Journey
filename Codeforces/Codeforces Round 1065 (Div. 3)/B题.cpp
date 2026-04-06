#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+10,0);
        for(int i=1;i<=n;++i)
        cin>>a[i];
        if(a[1]!=-1&&a[n]!=-1)cout<<abs(a[n]-a[1]);
        else cout<<0;
        cout<<'\n';
        if(a[1]!=-1)cout<<a[1]<<" ";
        else{
            if(a[n]!=-1)cout<<a[n];
            else cout<<0;
            cout<<" ";
        }
        for(int i=2;i<n;++i){
            if(a[i]!=-1)cout<<a[i];
            else cout<<0;
            cout<<" ";
        }
        if(a[n]!=-1)cout<<a[n]<<" ";
        else{
            if(a[1]!=-1)cout<<a[1];
            else cout<<0;
            cout<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
/*
题目要求差分数组绝对值的最小可能值，实际就是最后一项减去第一项求绝对值。
中间缺失的任何项，为了字典序最小，直接补0即可；
如果首尾均缺项，都补0即可；
如果首尾只缺少一项，补充相同的数字即可。
*/
