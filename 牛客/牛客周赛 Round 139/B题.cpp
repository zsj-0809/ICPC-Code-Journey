#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    if((n==1&&m==1)||(n>1&&m>1))cout<<"-1";
    else if(n==1){
        cout<<1;
        for(int i=1;i<m;++i)
        cout<<0;
    }
    else{
        cout<<1<<'\n';
        for(int i=1;i<n;++i)
        cout<<0<<'\n';
    }
    return 0;
}
/*
只要是二维的情况，一定错误。
考虑角落情况减少一维即可。
*/
