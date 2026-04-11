#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h,w;
    cin>>h>>w;
    for(int i=1;i<=h;++i){
        for(int j=1;j<=w;++j){
            if(i==1||i==h||j==1||j==w)cout<<"#";
            else cout<<".";
        }
        cout<<'\n';
    }
    return 0;
}
